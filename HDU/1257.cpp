//0ms_1368kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, n, a[1000], b[1000], ans;
	while (~scanf("%d", &n))
	{
		b[1] = 50000;
		ans = 1;
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= ans; j++)
				if (b[j] >= a[i])
				{
					b[j] = a[i];
					a[i] = 0;
					break;
				}
			if (a[i] > 0)
			{
				ans++;
				b[ans] = a[i];
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}