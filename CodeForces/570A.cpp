//31ms_0kB
#include <cstdio> 
#include <cstring>
using namespace std;

int main()
{
	int i, n, m, MAX, place, a, j, sum[110];
	while (~scanf("%d%d", &n, &m))
	{
		memset(sum, 0, sizeof(sum));
		place = 0;
		for (i = 1; i <= m; i++)
		{
			MAX = -1;
			for (j = 1; j <= n; j++)
			{
				scanf("%d", &a);
				if (a > MAX)
				{
					MAX = a; place = j;
				}
			}
			sum[place]++;
		}
		MAX = 0;
		for (i = 1; i <= n; i++)
			if (sum[i] > MAX)
			{
				MAX = sum[i];
				place = i;
			}
		printf("%d\n", place);
	}
	return 0;
}