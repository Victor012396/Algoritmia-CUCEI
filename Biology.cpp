#include <cstdio>
#include <cstring>
using namespace std;
int main(void)
{
	int d, sum;
	int min[35], max[35], di[35];
	int mi = 0, ma = 0;
	scanf("%d%d", &d, &sum);
	for (int i = 0; i < d; i++)
	{
		scanf("%d%d", &min[i], &max[i]);
		mi += min[i]; ma +=max[i];
	}
	if (mi > sum || ma < sum)
		printf("NO\n");
	else
	{
		printf("YES\n");
		int di = sum - mi;
		int i = 0;
		while (i != d)
		{
			if (di == 0)
				printf("%d ", min[i]);
			else if (di <= max[i] - min[i])
			{
				printf("%d ", min[i] + di);
				di = 0;
			}
			else
			{
				printf("%d ", max[i]);
				di -= max[i] - min[i];
			}
			i++;
		}
	}
	return 0;
}
