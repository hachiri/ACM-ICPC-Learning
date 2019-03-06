//46ms_28kB
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int z, i, ans, a[30], place;
	char s[50100];
	while (~scanf("%s", s))
	{
		place = ans = 0;
		memset(a, 0, sizeof(a));
		z = strlen(s);
		for (i = 0; i < min(26, z); i++)
		{
			if (a[int(s[i]) - 63] == 0 || s[i] == '?')
				ans++;
			a[int(s[i]) - 63]++;
		}
		for (i = 26; i < z; i++)
		{
			if (ans == 26)
			{
				place = i - 1;
				break;
			}
			a[int(s[i - 26]) - 63]--;
			if (a[int(s[i - 26]) - 63] == 0 || s[i - 26] == '?')
				ans--;
			if (a[int(s[i]) - 63] == 0 || s[i] == '?')
				ans++;
			a[int(s[i]) - 63]++;
		}
		if (ans == 26)	place = i - 1;
		if (place)
		{
			for (i = 0; i < place - 25; i++)
				if (s[i] != '?')
					printf("%c", s[i]);
				else
					printf("A");
			for (i = place - 25; i <= place; i++)
			{
				if (s[i] != '?')
					printf("%c", s[i]);
				else
					for (int j = 2; j < 28; j++)
						if (a[j] == 0)
						{
							printf("%c", j + 63);
							a[j] = 1;
							break;
						}
			}
			for (i = place + 1; i < z; i++)
				if (s[i] != '?')
					printf("%c", s[i]);
				else
					printf("A");
			printf("\n");
		}
		else
			printf("-1\n");
	}
	return 0;
}