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
#define pi 3.14159265358979323846

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    map<int,vector<int> > m;
    string aux;
    cin>>aux;
        forin(i,n){
            m[i].resize(28);
            if(i){m[i]=m[i-1];
                  m[i].push_back(aux[i]-'a');
            }
            else {
                    m[i].push_back(aux[i]-'a');
                    }
        }
    int mi;
    cin>>mi;
    while(mi--)
    {
        string k;
        cin>>k;
        map<int,int> mk;
        forin(i,k.size())mk[k[i]-'a']++;
        bool band;
        forisn(i,k.size()-1,n)
        {
            band=true;
            for(auto itk : mk)
            {
                if(m[i][itk.first]<itk.second)
                {
                    band=false;
                    break;
                }
            }
            if(band){cout<<i+1<<"\n";break;}
        }
    }
    return 0;
}
