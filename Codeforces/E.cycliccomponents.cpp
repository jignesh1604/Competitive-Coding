#include <iostream>
#include <vector>


using namespace std;

const int maxN = 2e5+5;
int father[maxN], siz[maxN], cicle[maxN], yes[maxN];
int v, e;
vector<pair<int,int>> edges;


// n es el primer elemento y m el ultimo, por ejemplo los nodos de un grafo desde el 1 al 10
void makeSet(int n, int m)
{
	for (int i = n; i <= m; ++i)
	{
		father[i] = -1;
		siz[i] = 0;
		cicle[i]=0;
		yes[i]=1;
	}
}

int find(int x)
{
	if (father[x]==-1) return x;

	return father[x] = find(father[x]);
}

void unio(int x, int y)
{
	if (siz[x] > siz[y]) father[y] = x;
	else
	{
		father[x] = y;
		if ( siz[x] == siz[y] ) siz[y]++;
	}
}




int main()
{
	scanf("%d %d", &v, &e);
	int aux1, aux2;
	for (int i = 0; i < e; ++i)
	{
		scanf("%d %d", &aux1, &aux2);
		edges.push_back({aux1, aux2});
	}
	makeSet(1,v);
	int count = 0;
	for ( auto p : edges )
	{
		
		if (find(p.first) != find(p.second))
		{
			
			unio( find( p.first ) , find( p.second ) );
		}
		cicle[p.first]++;
		cicle[p.second]++;

	}
	for (int i = 1; i <= v; ++i)
	{
		if (cicle[i]!=2)
		{
			yes[find(i)] = 0;
		}
	}
	for (int i = 1; i <= v; ++i)
	{
		if ( i == find(i) && yes[i])
		{
			count++;
		}
	}
	printf("%d\n", count);
}
