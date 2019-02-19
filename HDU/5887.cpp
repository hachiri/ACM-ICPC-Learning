//0ms_1388kB
#include <bits/stdc++.h>
using namespace std;

long long max_score, t, n;
struct ss
{
	long long time, score;
	double value;
	bool operator <(const ss &x)const
	{
		return value > x.value;
	}
}s[105];

void dfs(int i, long long sum_t, long long sum_score)
{
	if (sum_score > max_score)	max_score = sum_score;
	if (i > n - 1 || sum_score + s[i].value*(t - sum_t) + 1 < max_score)
		return;		//¼ôÖ¦£¬·ñÔò»áTLE
	if (sum_t + s[i].time <= t)
		dfs(i + 1, sum_t + s[i].time, sum_score + s[i].score);
	dfs(i + 1, sum_t, sum_score);
}

int main()
{
	int i, a, b;
	while (~scanf("%lld%lld", &n, &t))
	{
		memset(s, 0, sizeof(s));
		max_score = i = 0;
		while (n--)
		{
			scanf("%d%d", &a, &b);
			if (a <= t)
			{
				s[i].time = a;
				s[i].score = b;
				s[i].value = b / 1.00000 / a;
				i++;
			}
		}
		n = i;
		sort(s, s + n);
		dfs(0, 0, 0);
		printf("%I64d\n", max_score);
	}
	return 0;
}