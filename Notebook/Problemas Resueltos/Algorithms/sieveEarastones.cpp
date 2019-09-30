#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
ll sieveSize;
bitset<10000010> bs; // 10^7
vi primos; //vector con primos
void sieve(ll n) // crear criba in [0..n]
{
    sieveSize=n+1;
    bs.set(); //asignar a todo el bs en 1
    bs[0]=bs[1]=0; // quitar el 0 y el 1 (ya que no son primos)
    for(ll i=2;i<=sieveSize;i++) //for para el bs
    {
        if(bs[i]){ // asignar al numero indice si es primo o no
            for(ll j=i*i;j<=sieveSize;j+=i)bs[j]=0;//multiplos de 2,3,etc
            primos.push_back(i);//agregar al vector el primo i
        }
    }
}
bool isPrime(ll n) // ver si n es primo
{
    if(n<=sieveSize)return bs[n];
    for(ll i =0;i<primos.size();i++)//ver si es divisible por otro primo
        if(n%primos[i]==0)return false; // si lo es devuelvo false
    return true; // verdadero solo funciona para n<=primos[primos.size]^2
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    sieve(10000000);
    cout<<isPrime(2147483647)<<"\n";//primo de 10 digitos
    cout<<isPrime(136117223861LL)<<"\n";//no es primo -> 104729*1299709
    return 0;
}
