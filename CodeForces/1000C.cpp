//296ms_7800kB
#include <cstdio> 
#include <cstring>
#include <algorithm>
#include <utility>
using namespace std;

bool compare(pair<long long, long long>& a, pair<long long, long long>& b)
{
	if (a.first == b.first)
		return a.second > b.second;
	else
		return a.first < b.first;
}

long long ans[200100];
pair<long long, long long>p[400100];

int main()
{
	long long n, l, r, i, count;
	while (~scanf("%lld", &n))
	{
		memset(ans, 0, sizeof(ans));
		count = 0;
		for (i = 1; i <= 2 * n; i += 2)
		{
			scanf("%lld%lld", &l, &r);
			p[i].first = l;
			p[i].second = 1;
			p[i + 1].first = r + 1;
			p[i + 1].second = -1;
		}
		sort(p + 1, p + 1 + 2 * n, compare);
		for (i = 1; i <= 2 * n; i++)
		{
			ans[count] += p[i].first - p[i - 1].first;
			count += p[i].second;
		}
		for (i = 1; i <= n; i++)
			printf("%lld ", ans[i]);
		printf("\n");
	}
	return 0;
}