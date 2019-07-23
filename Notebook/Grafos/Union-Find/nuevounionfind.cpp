#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX_NODES =  1000000;

//vector<ll> nodes(MAX_NODES, 0);
int altura[MAX_NODES+1];
int padre[MAX_NODES+1];
ll find(ll a)
{
	vector<ll> pushes;
	while(padre[a])
	{
		pushes.push_back(a);
		a = padre[a];

	}
	int tam = pushes.size();
	for(int i = 0; i < tam; i++) padre[pushes[i]] =a;
	return a;
}
bool comprobar(ll a, ll b)
{
	return find(a) == find(b);
}
void conectar(ll a, ll b)
{
	if(!comprobar(a, b))
	{
		if(altura[a] > altura[b])
		{
			ll representante2 = find(a);
			ll representante = find(b);
			padre[representante] = a;

			altura[representante2]+= altura[representante];
		}
		else
		{
			ll representante2 = find(b);

			ll representante = find(a);

			padre[representante] = b;
			altura[representante2]+= (altura[representante2] - altura[representante]);
		}
	}
}

int main()
{
	char opcion;
	int a, b;
	while(true)
	{
		cin >> opcion;
		if(opcion != 'F')
		{
			if(opcion == 'C')
			{
				cin >> a>> b;
				conectar(a, b);
			}
			else if(opcion == 'P')
			{
				cin >> a >> b;
				cout << (comprobar(a,b) ? "S\n" : "N\n");
			}
		}
		else
		{
			break;
		}
	}
	return 0;
}



