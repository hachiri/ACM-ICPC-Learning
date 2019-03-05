//0ms_1368kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s[1005];
	int z, p, i, T, a[30], m[30];
	scanf("%d", &T);
	for (int j = 1; j <= T; j++)
	{
		memset(m, 10, sizeof(m));
		memset(a, 0, sizeof(a));
		scanf("%s", s);
		z = strlen(s);
		for (i = 0; i < z; i++)
		{
			p = int(s[i]) - 96;
			if (a[p] != 0)
			{
				m[p] = min(m[p], i + 1 - a[p]);
				m[0] = min(m[0], m[p]);
				a[p] = i + 1;
			}
			else
				a[p] = i + 1;
		}
		if (m[0] == m[27])
			printf("Case #%d: -1\n", j);
		else
			printf("Case #%d: %d\n", j, m[0]);
	}
	return 0;
}