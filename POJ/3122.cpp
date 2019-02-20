//32ms_632kB
#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
	return a > b;
}

int main()
{
	double l, r, mid;
	int T, n, F, i, V[10010], ans;
	scanf("%d", &T);
	while (T--)
	{
		memset(V, 0, sizeof(V));
		l = 0;
		scanf("%d%d", &n, &F);
		F++;
		for (i = 0; i < n; i++)
		{
			scanf("%d", &V[i]);
			V[i] *= V[i];
		}
		sort(V, V + n, compare);
		r = V[0];
		while (r - l > 1e-6)
		{
			ans = 0;
			mid = (l + r) / 2;
			for (i = 0; i < n; i++)
			{
				if (V[i] < mid)
					break;
				else
					ans += V[i] / mid;
			}
			if (ans >= F)
				l = mid;
			else
				r = mid;
		}
		printf("%0.4f\n", l * atan(1.0) * 4);
	}
	return 0;
}