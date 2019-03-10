//31ms_100kB
#include <cstdio> 
#include <cstring>
using namespace std;

int main()
{
	char s[100100];
	int i, z, a1, b1, a2, b2, p, pl;
	while (~scanf("%s", s))
	{
		z = strlen(s);
		p = a1 = a2 = b1 = b2 = 0;
		if (z % 2 == 1)
			printf("NO\n");
		else
		{
			for (i = 0; i < z / 2; i++)
				if (s[i] == 'A')	a1++;
				else	b1++;
			for (i = z / 2; i < z; i++)
				if (s[i] == 'A')	a2++;
				else	b2++;
			for (i = 0; i < z / 2; i++)
			{
				if (a1 == a2 && b1 == b2)
				{
					pl = i;
					p = 1;
					break;
				}
				if (s[i] == 'A') { a1--; a2++; }
				else
				{
					b1--; b2++;
				}
				if (s[i + z / 2] == 'A') { a2--; a1++; }
				else
				{
					b2--; b1++;
				}
			}
			if (p == 0)
				printf("NO\n");
			else
			{
				printf("YES\n");
				printf("%d %d\n", pl + 1, pl + z / 2 + 1);
			}
		}
	}
	return 0;
}