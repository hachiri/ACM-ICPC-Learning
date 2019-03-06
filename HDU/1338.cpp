//0ms_1216kB
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	int m, n, i, j, b[60], ans, T = 1;
	bool a[1010];
	while (scanf("%d%d", &m, &n) && m && n)
	{
		ans = 0;
		memset(a, true, sizeof(a));
		for (i = 0; i < n; i++)
		{
			scanf("%d", &b[i]);
			a[b[i]] = false;
		}
		for (i = 0; i < n; i++)
			for (j = b[i]; j <= m * n; j++)
				if (a[j])
				{
					ans++;
					a[j] = false;
					break;
				}
		printf("Case %d: %d\n", T++, n - ans);
	}
	return 0;
}