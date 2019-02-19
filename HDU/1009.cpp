//46ms_1448kB
#include <bits/stdc++.h>
using namespace std;

struct s
{
	double value, time, pay;
	bool operator <(const s &x)const
	{
		return value>x.value;
	}
}c[1105];

int main()
{
	int n, i;
	double m, ans;
	while (scanf("%lf%d", &m, &n))
	{
		if (m == -1 && n == -1)
			return 0;
		ans = 0;
		memset(c, 0, sizeof(c));
		for (i = 0; i < n; i++)
		{
			scanf("%lf%lf", &c[i].time, &c[i].pay);
			c[i].value = c[i].time / c[i].pay;
		}
		sort(c, c + n);
		for (i = 0; i < n; i++)
		{
			if (c[i].pay > m)
			{
				ans += m * c[i].value;
				break;
			}
			else
			{
				ans += c[i].time;
				m -= c[i].pay;
			}
		}
		printf("%0.3f\n", ans);
	}
}