//0ms_316kB
#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main()
{
	int j, k, n, num[105], i, dp[105][105];
	while (~scanf("%d", &n))
	{
		for (i = 0; i < n; i++)
			scanf("%d", &num[i]);
		memset(dp, 0, sizeof(dp));
		for (j = 2; j < n; j++)
			for (i = 0; i + j <= n; i++)
			{
				dp[i][i + j] = 10000000;
				for (k = i + 1; k < i + j; k++)
					dp[i][i + j] = min(dp[i][i + j], dp[i][k] + dp[k][i + j] + num[i] * num[i + j] * num[k]);
			}
		printf("%d\n", dp[0][n - 1]);
	}
	return 0;
}