//80ms_184kB
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
	int T, n, i, a[510], b[510], m, k;
	bool c[510][510];
	scanf("%d", &T);
	while (T--)
	{
		k = 0;
		memset(c, false, sizeof(c));
		scanf("%d%d", &m, &n);
		for (i = 0; i<n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i<n; i++)
			scanf("%d", &b[i]);
		for (i = 0; i<n; i++)
			if (!c[a[i]][b[i]])
			{
				k++;
				c[a[i]][b[i]] = c[b[i]][a[i]] = 1;
			}
		printf("%0.3f\n", k / 1.0 / m);
	}
	return 0;
}