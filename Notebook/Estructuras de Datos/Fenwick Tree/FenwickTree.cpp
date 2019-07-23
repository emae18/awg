#include <iostream>
#include <vector>

using namespace std;

#define Padre(u) int(u)-LSB(int(u))
#define Hijo(u) int(u)+LSB(int(u))

vector<int> arrayOriginal;
vector<int> fwSum;

int N;
int LSB(int x)
{
	return x & -x;
}

long long get(int i)
{
	long long ret = 0;
	for(int x = i; x > 0; x = Padre(x)) ret+= fwSum[x];
	return ret;
}
long long get(int a, int b)
{
	if(a> b) swap(a,b);
	return get(b)-get(a-1);
}

void update(int i, int a)
{
	for(int x = i; x < N+1; x=Hijo(x)) fwSum[x]+= a;
}
