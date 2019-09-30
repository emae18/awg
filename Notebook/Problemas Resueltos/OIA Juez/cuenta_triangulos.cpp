#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
void sumar(vector<int> k, set<int> &s)
{
    int sum=0;
    forin(i,k.size())sum+=k[i];
    s.insert(sum);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n,0);
    forin(i,n)
        cin>>v[i];
    int cont=0,si=0;
    forin(i,n)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            if(v[i]+v[j]>v[k] && v[k]+v[j]>v[i] && v[i]+v[k]>v[j] )cont++;
        }
    }

    cout<<cont<<"\n";
    return 0;
}
