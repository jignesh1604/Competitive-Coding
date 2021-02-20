#include <iostream>
#include <algorithm>


using namespace std;

int numbs[int(2e5 + 5)];

int main()
{
	int n,k;
	scanf("%d %d" , &n, &k);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &numbs[i]);
	}
	sort(numbs, numbs+n);
	if (k==0)
	{
		if (numbs[0]==1)
		{
			printf("-1\n");
		}
		else
		{
			printf("1\n");
		}
		return 0;
	}
	if (numbs[k]!=numbs[k-1]) printf("%d\n", numbs[k-1]);
	else printf("-1\n");
}