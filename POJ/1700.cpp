//0ms_308kB
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int T, n, i, ans, a[1010];
	scanf("%d", &T);
	while (T--)
	{
		ans = 0;
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		for (i = 1; i <= n; i++)
			scanf("%d", &a[i]);
		sort(a, a + n + 1);
		while(1)
		{
			if (n == 1) { ans += a[1]; break; }
			if (n == 2) { ans += a[2]; break; }
			if (n == 3) { ans += a[1] + a[2] + a[3]; break; }
			ans += min(a[n] + 2 * a[2] + a[1], 2 * a[1] + a[n] + a[n - 1]);
			n -= 2;
		}
		printf("%d\n", ans);
	}
	return 0;
}