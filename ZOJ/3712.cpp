//0ms_184kB
#include <cstdio>
using namespace std;

int main()
{
	int a, b, c, i, T, min, max;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d%d%d", &a, &b, &c);
		min = max = 0;
		for (i = 0; i < c; i++)
			max += 50 * (i * 2 + 1);
		for (i = 0; i < b; i++)
			max += 100 * ((i + c) * 2 + 1);
		for (i = 0; i < a; i++)
			max += 300 * ((i + c + b) * 2 + 1);
		for (i = 0; i < a; i++)
			min += 300 * (i * 2 + 1);
		for (i = 0; i < b; i++)
			min += 100 * ((i + a) * 2 + 1);
		for (i = 0; i < c; i++)
			min += 50 * ((i + a + b) * 2 + 1);
		printf("%d %d\n", min, max);
	}
	return 0;
}