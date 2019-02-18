#include <bits/stdc++.h>
using namespace std;

int i, n, ans, pl[100],w[100];
bool c[30], a[30], b[30];
void dfs(int p)
{
	if (p > n)
		ans++;
	else
		for (i = 1; i <= n; i++)
		{
			if (c[i] == false && a[p + i - 1] == false && b[n - p + i] == false)
			{
				pl[p] = i;
				c[i] = true;
				a[p + i - 1] = true;
				b[n - p + i] = true;
				dfs(p + 1);
				i = pl[p];
				c[i] = false;
				a[p + i - 1] = false;
				b[n - p + i] = false;
				
			}
		}
}

int main()
{
	memset(w, -1, sizeof(w));
	while (scanf("%d", &n))
	{
		if (n == 0)	break;
		if (w[n] != -1) cout << w[n] << endl;
		else
		{
			memset(pl, 0, sizeof(pl));
			memset(a, false, sizeof(a));
			memset(b, false, sizeof(b));
			memset(c, false, sizeof(c));
			ans = 0;
			dfs(1);
			w[n] = ans;
			cout << ans << endl;
		}
	}
	return 0;
}