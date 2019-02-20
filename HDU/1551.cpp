//93ms_1492kB
#include <bits/stdc++.h>
using namespace std;

bool compare(double a, double b)
{
	return a > b;
}

int main()
{
	double l, r, mid, p[10010];
	int n, K, i, ans;
	while (scanf("%d%d", &n, &K))
	{
		if (n == 0 && K == 0)	break;
		l = 0;
		memset(p, 0, sizeof(p));
		for (i = 0; i < n; i++)
			scanf("%lf", &p[i]);
		sort(p, p + n, compare);
		r = p[0];
		while (r - l > 0.001)
		{
			ans = 0;
			mid = (l + r) / 2;
			for (i = 0; i < n; i++)
			{
				if (p[i] < mid)
					break;
				else
					ans += p[i] / mid;
			}
			if (ans >= K)
				l = mid;
			else
				r = mid;
		}
		printf("%0.2f\n", l);
	}
	return 0;
}