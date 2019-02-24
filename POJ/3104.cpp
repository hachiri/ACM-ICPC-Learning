//594ms_696kB
#include<cstdio>
using namespace std;

int n, a[100010], k, i;
bool check(int ans)
{
	long long sum = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] > ans)
			sum += (a[i] - ans - 1) / (k - 1) + 1;
	}
	if (sum <= ans)
		return true;
	else
		return false;
}

int main()
{
	int r = 0, l = 0, m;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] > r)	r = a[i];
	}
	scanf("%d", &k);
	if (k == 1)	printf("%d", r);
	else
	{
		while (l <= r)
		{
			m = (l + r) / 2;
			if (check(m))
				r = m - 1;
			else
				l = m + 1;
		}
		printf("%d", l);
	}
	return 0;
}