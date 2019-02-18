#include <bits/stdc++.h>
using namespace std;

bool compare(double a, double b)
{
	return a > b;
}

int main()
{
	double l, y, mid, r[10010];
	int n, F, i,ans;
	while (scanf("%d%d", &n, &F))
	{
		if (n == 0 && F == 0)	break;
		l = 0;
		memset(r, 0, sizeof(r));
		for (i = 0; i < n; i++)
			scanf("%lf", &r[i]);
		sort(r, r + n, compare);
		y = r[0];
		while (y - l > 0.001)
		{
			ans = 0;
			mid = (l + y) / 2.000;
			for (i = 0; i < n; i++)
			{
				if (r[i] < mid)
					break;
				else
					ans += r[i] / 1.000 / mid;
			}
			if (ans >= F)
				l = mid;
			else
				y = mid;
		}
		printf("%0.2f\n", l);
	}
	return 0;
}