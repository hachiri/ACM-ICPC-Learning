//31ms_24kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int j, ans;
	long long n, s, z, m, sum, i;
	char c[30];
	while (~scanf("%lld%lld", &n, &s))
	{
		sum = 0;
		memset(c, 0, sizeof(c));
		if (n - s > 200)
			z = s + 200;
		else
			z = n;
		for (i = s; i <= z; i++)
		{
			ans = 0;
			sprintf(c, "%lld", i);
			m = strlen(c);
			for (j = 0; j < m; j++)
				ans += c[j] - '0';
			if (i - ans >= s)
				sum++;
		}
		printf("%lld\n", sum + n - z);
	}
	return 0;
}