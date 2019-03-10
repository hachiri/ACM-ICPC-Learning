//31ms_0kB
#include <cstdio> 
#include <algorithm> 
#include <cstring> 
using namespace std;

int main()
{
	char s[100], s2[100][100], c, s3[100];
	int  T, z, a[100][100], i, j, k, l, p, ans;
	while (~scanf("%d", &T))
	{
		memset(a, 0, sizeof(a));
		scanf("%s", s);
		z = strlen(s);
		for (i = 1; i <= z; i++)
		{
			c = s[0];
			for (j = 1; j < z; j++)
				s[j - 1] = s[j];
			s[z - 1] = c;
			a[0][i] = i;
			sprintf(s2[i], "%s", s);
		}
		a[0][z] = 0;
		p = 0;
		for (i = 1; i < T; i++)
		{
			scanf("%s", s3);
			for (j = 1; j <= z; j++)
			{
				strcpy(s, s3);
				if (p == 1)	break;
				l = 0;
				while (strcmp(s, s2[j]))
				{
					if (l > z) { p = 1; break; }
					l++;
					c = s[0];
					for (k = 1; k < z; k++)
						s[k - 1] = s[k];
					s[z - 1] = c;
				}
				a[i][j] += l;
			}
		}
		if (p == 1)
			printf("-1\n");
		else
		{
			p = 999999999;
			for (j = 1; j <= z; j++)
			{
				ans = 0;
				for (i = 0; i < T; i++)
					ans += a[i][j];
				p = min(p, ans);
			}
			printf("%d\n", p);
		}
	}
	return 0;
}