//0ms_288kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, i, a[300], T, ans, MAX;
	scanf("%d", &T);
	while (T--)
	{
		ans = 0;
		scanf("%d%d", &n, &m);
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < m; i++)
			ans += a[i];
		MAX = ans;
		for (i = m; i < n + m; i++)
		{
			if (i >= n)
				ans = ans - a[i - m] + a[i - n];
			else
				ans = ans - a[i - m] + a[i];
			MAX = max(MAX, ans);
		}
		printf("%d\n", MAX);
	}
	return 0;
}