//109ms_5280kB
#include <bits/stdc++.h>
using namespace std;

int c[1000][1000];
int main()
{
	int i, j, n, m;
	char a[1000], b[1000];
	while (~scanf("%s%s", &a, &b))
	{
		memset(c, 0, sizeof(c));
		n = strlen(a);
		m = strlen(b);
		for (i = 1; i <= n; i++)
			for (j = 1; j <= m; j++)
			{
				if (a[i - 1] == b[j - 1])
					c[i][j] = c[i - 1][j - 1] + 1;
				else
					c[i][j] = max(c[i][j - 1], c[i - 1][j]);
			}
		printf("%d\n", c[n][m]);
	}
	return 0;
}