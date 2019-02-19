#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, n, a[1010], b[1010], max;
	while (scanf("%d", &n), n != 0)
	{
		max = 0;
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		memset(b, 0, sizeof(b));
		b[0] = a[0];
		for (i = 1; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (a[j] < a[i] && b[j]>b[i])
					b[i] = b[j];
			}
			b[i] += a[i];
		}
		for (i = 0; i < n; i++)
		{
			if (b[i] > max)
				max = b[i];
		}
		printf("%d\n", max);
	}
	return 0;
}