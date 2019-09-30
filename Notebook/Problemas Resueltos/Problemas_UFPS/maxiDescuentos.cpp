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
ll d,m,d1,n,d2;
bool res(string cad,int i)
{
    if((cad[i-2]!=cad[i-1] && cad[i-1]==cad[i] &&
       cad[i]==cad[i+1] && cad[i+1]!=cad[i+2])
       || (cad[i-2]==cad[i-1] && cad[i-1]==cad[i] &&
       cad[i]==cad[i+1] && cad[i+1]==cad[i+2]))return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,k;int q=2;
    while(q--)
    {
        cin>>n;ll mi;int z;
        vi v;
        vi c(n,0);
        vi t(n,0);
        vi d(n,0);
        forin(i,n)cin>>c[i];
        forin(i,n)
        {
            cin>>t[i];
            if(i)
            {
                if((t[i]*c[i])<=mi)
                {
                    if((t[i]*c[i])==mi)v.push_back(i);
                    mi=t[i]*c[i];
                    z=i;
                }

            }else {mi=t[i]*c[i];z=i;
            }
        }
        forin(i,n)cin>>d[i];
        cin>>k;int sum=0;
        if(v.size()>0)
        {
            v.push_back(z);
            vector<pair<int,int> >sums;
            forin(i,v.size())
            {
                if(v[i]>k-1)
                forisn(p,k,v[i]+1)sum+=d[p];
                else if(k-1>v[i])
                for(int p=k-1;p>v[i];p--)sum+=d[p];
                sums.push_back({sum,v[i]});
            }
            sort(sums.begin(),sums.end());
            if(sums[0].first==sums[1].first)
            {
                if(sums[0].first<sums[1].first)cout<<sums[0].second+1<<" "<<sums[0].first<<"\n";
                else cout<<sums[1].second+1<<" "<<sums[1].first<<"\n";
            }else{
                cout<<sums[0].second+1<<" "<<sums[0].first<<"\n";
            }
        }else{
            if(z>k-1)
                forisn(p,k,z+1)sum+=d[p];
            else if(k-1>z)
                for(int p=k-1;p>z;p--)sum+=d[p];
            else cout<<z<<" "<<mi<<"\n";
            cout<<z+1<<" "<<sum+mi<<"\n";
            }
        }

    return 0;
}
