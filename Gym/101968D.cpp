//3369ms_3600kB
#include <cstdio> 
#include <cstring>
#include <map>
using namespace std;

int main()
{
	map<int, int>a;
	int T, n, k, i, m;
	scanf("%d", &T);
	while (T--)
	{
		a.clear();
		scanf("%d%d", &n, &k);
		for (i = 0; i < n; i++)
		{
			scanf("%d", &m);
			a[m]++;
		}
		for (i = 0; i < n; i++)
		{
			scanf("%d", &m);
			a[m]--;
			if (a[m] == 0)
				a.erase(m);
		}
		if (a.size() > 2)
			printf("NO\n");
		else
			if (a.size() == 0)
				printf("YES\n");
			else
			{
				map<int, int>::iterator it1, it2;
				it1 = a.begin();
				it2 = it1++;
				if (it1->second > 1 || it1->second < -1 || it2->second > 1 || it2->second < -1 || abs(it1->first - it2->first) > k)
					printf("NO\n");
				else
					printf("YES\n");
			}
	}
	return 0;
}