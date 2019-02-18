#include <bits/stdc++.h>
using namespace std;

long long m, t, n;
struct ss
{
	long long time, score, ans;
	double value;
	bool operator <(const ss &x)const
	{
		return value>x.value;
	}
}s[1005];

void dfs(int i, long long tt, long long v)
{
	if (v > m)	m = v;
	if (i > n - 1)	return;
	if (v + s[i].value*(t - tt) + 1 < m)	return;
	if (tt + s[i].time <= t)
		dfs(i + 1, tt + s[i].time, v + s[i].score);
	dfs(i + 1, tt, v);
}

int main()
{
	int i;
	long long a, b;
	while (~scanf("%lld%lld", &n, &t))
	{
		memset(s, 0, sizeof(s));
		m = 0;
		i = 0;
		while (n--)
		{
			scanf("%lld%lld", &a, &b);
			if (a <= t)
			{
				s[i].time = a;
				s[i].score = b;
				s[i].value = b /1.0000000/ a;
				i++;
			}
		}
		n = i;
		sort(s, s + n);
		dfs(0, 0, 0);
		printf("%I64d\n", m);
	}
	return 0;
}