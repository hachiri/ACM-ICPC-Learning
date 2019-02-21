//1606ms_38420kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<long long, int>m;
	long long a;
	int n, k, i, j, l = 0;
	while (~scanf("%d%d", &n, &k))
	{
		for (i = 0; i < n; i++)
		{
			scanf("%lld", &a);
			for (j = 1; j <= k; j++)
				if (a % j == 0)
				{
					m[a / j]++;
					l = max(l, m[a / j]);
				}
		}
		printf("%d\n", l);
	}
	return 0;
}