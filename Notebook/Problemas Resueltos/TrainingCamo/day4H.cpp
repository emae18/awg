#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) forisn(int i=s;i<n;i++)
#define mostrar(x,v) for(auto x: v)cout<<x<<" ";
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
void repart(int x)
{

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vi v(n);
        forin(i,n)cin>>v[i];
        int mid=v[n-1]/2;
        vi sumas(m);
        int z=0;
        forin(i,m)
        {
            while(sumas[i]<=mid)
            {
                sumas[i]+=v[z++];
            }
            if(z!=n && i+1==m)
            {
                if(mid<sumas[i])
                {
                    mid=(sumas[i]+mid)/2;

                    cout<<"mid-> "<<mid<<"\n";
                    fill(all(v),0);
                }
            }
        }
        mostrar(x,sumas);cout<<"\n";
    }
    return 0;
}
