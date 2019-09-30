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
void jugar(deque<int> &p, int entra)
{
    p.pop_front();
    p.push_back(entra);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    set<int> m;
    deque<int> p;int om=0, op=0;
    cin>>n;int aux;
    forin(i,n){
        cin>>aux;
        if(aux)m.insert(aux);else om++;
    }
    forin(i,n){
        cin>>aux;
        p.push_back(aux);
        if(!aux)op++;
    }
    if(p.front()==1 && p.back()==n && m.empty() ){cout<<0<<"\n";return 0;}
    int cont=0;
    while(!m.empty())
    {
        if(!p[0])
        {
            if(p.back()==1 && op+1==n)
                cont+=n-1;
        }else{
            if(p.back())
            {
                auto it=m.begin();
                if(p.front())m.insert(p.front());
                else om++;
                jugar(p,*it);
                m.erase(m.begin());
                cont++;
            }else{
                if(om)
                {
                    om--;
                    if(p.front())m.insert(p.front());
                    else om++;
                    jugar(p,0);
                    cont++;
                }
            }
        }
    }
    cout<<cont<<"\n";
    return 0;
}
