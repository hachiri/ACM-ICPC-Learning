#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,a[1006],j,n,b[1006];
	while (scanf("%d", &n), n != 0)
	{
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
		j = 0;
		for (i = 1; i < n; i++)
			if (b[i] > j)	j = b[i];
		cout << j << endl;
	}
	return 0;
}