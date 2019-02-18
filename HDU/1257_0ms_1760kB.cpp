#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, n, a[100000], ans, max, min;
	while (~scanf("%d", &n))
	{
		min = ans = 0;
		j = 1;
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		max = a[0];
		while (j != 0 && max != 0)
		{
			j = 0;
			for (i = 0; i < n; i++)
			{
				if (a[i] <= max && a[i] != 0)
				{
					max = a[i];
					a[i] = 0;
				}
				if (j == 0 && a[i]!=0)
					min = a[i];
				if (a[i] != 0)
					j = 1;
			}
			max = min;
			min = 0;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}