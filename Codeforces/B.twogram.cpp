#include <iostream>
#include <string>


using namespace std;

char word[101];
int reps[30][30];


int main()
{
	int n;
	scanf("%d", &n);
	scanf("%s", word);
	for (int i = 0; i < n-1; ++i)
	{
		reps[ int(word[i]-'A') ][ int(word[i+1]-'A') ]++;
		//int nose = int(word[i]-'A');
		//printf("%d\n", nose);
	}
	int a=0, b=0;
	for (int i = 0; i < 27; ++i)
	{
		for (int j = 0; j < 27; ++j)
		{
			//printf("%d ", reps[i][j]);
			if (reps[a][b]<reps[i][j])
			{
				a=i;
				b=j;
			}
		}
		//printf("\n");
	}

	char c = char('A'+a);
	char d = char('A'+b);
	printf("%c%c\n",c,d );
}
