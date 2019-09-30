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
    ll aux;
    cin>>n;
    while(n--)
    {
        cin>>aux;
        int ans=0;
        while(aux>1)
        {
            if(aux%2==0){
                    aux/=2;
            }else if(aux%3==0)
            {
                aux/=3;
                ++ans;
            }else if(aux%5==0) {
                aux/=5;
                ans+=2;
            }else
            {
                cout<<-1<<"\n";
                break;
            }
            ++ans;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
