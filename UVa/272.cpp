//0ms_0kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s;
	int p = 0;
	while (~scanf("%c", &s))
	{
		if (s == '"')
			if (p == 0)
			{
				p = 1;
				printf("``");
			}
			else
			{
				p = 0;
				printf("''");
			}
		else
			printf("%c", s);
	}
	return 0;
}