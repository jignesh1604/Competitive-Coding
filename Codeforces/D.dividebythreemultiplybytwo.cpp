#include <iostream>
#include <map>
#include <vector>


using namespace std;

map<long long, int> mp;
int n;
bool cond;
vector<long long> vec;

void checkSeq(long long current)
{
	mp[current] = 0;
	vec.push_back(current);
	if (vec.size()==n)
	{
		cond = true;
	}
	if (cond) return;
	if (current%3==0 && mp.find(current/3)!=mp.end() && mp[current/3])
	{
		
		checkSeq(current/3);
	}
	if (cond) return;
	if ( mp.find( current*2 ) != mp.end() && mp[current*2]==1 )
	{
		checkSeq(current*2);
	}
	if (cond) return;
	vec.pop_back();
	mp[current] = 1;
}



int main()
{
	scanf("%d", &n);
	long long aux;
	for (int i = 0; i < n; ++i)
	{
		scanf("%lld", &aux);
		mp[aux] = 1;
	}
	cond = false;
	for (auto pii: mp)
	{

		if (cond) break;
		checkSeq(pii.first);
	}
	for (auto p: vec)
	{
		printf("%lld ", p);
	}
	printf("\n");

}
