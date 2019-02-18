#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T, n, k,t,ans;
	set<int>s;
	set<int>::iterator it;
	scanf("%d", &T);
	while (T--)
	{
		s.clear();
		ans = 0;
		scanf("%d%d", &n, &k);
		while (n--)
		{
			scanf("%d", &t);
			s.insert(t);
		}
		for (it = s.begin(); it != s.end(); it++)
		{
			if (s.find(k - *it) != s.end())
				ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}