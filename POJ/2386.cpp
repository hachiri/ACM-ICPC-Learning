//16ms_908kB
#include <stdio.h>
using namespace std;

char c[101][101];
int m, n;
void dfs(int x, int y)
{
	int dx, dy, nx, ny;
	c[x][y] = '.';
	for (dx = -1; dx < 2; dx++)
		for (dy = -1; dy < 2; dy++)
		{
			nx = x + dx;
			ny = y + dy;
			if (c[nx][ny] == 'W' && nx >= 0 && ny >= 0 && nx<n && ny<m)
				dfs(nx, ny);
		}
	return;
}

int main()
{
	int i, j, ans=0;
	scanf("%d%d", &n, &m);
	getchar();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			scanf("%c", &c[i][j]);
		getchar();
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			if (c[i][j] == 'W')
			{
				dfs(i, j);
				ans++;
			}
	printf("%d", ans);
	return 0;
}