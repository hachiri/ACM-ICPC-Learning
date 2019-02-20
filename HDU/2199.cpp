//15ms_1416kB
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	double X, Y, l, r;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%lf", &Y);
		if (807020300 < Y || Y < 6)
			printf("No solution!\n");
		else
		{
			l = 0;
			r = 100;
			while (r - l > 1e-6)
			{
				X = (r + l) / 2;
				if (8 * pow(X, 4) + 7 * pow(X, 3) + 2 * pow(X, 2) + 3 * X + 6 > Y)
					r = X;
				else
					l = X;
			}
			printf("%.4lf\n", r);
		}
	}
	return 0;
}