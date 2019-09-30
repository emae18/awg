#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int nc;
    cin>>nc;
    int n,k;
    forisn(z,1,nc+1)
    {
        cin>>n>>k;
        vi v(n);
        vi m(n+1);
        forin(i,n)v[i]=i+1;
        int i=k;int j=k;
        while(v.size()!=1)
        {
            if(j==k)
            {
                v.erase(find(all(v),i));
                m[i]=1;
                j=0;
            }
            if(m[i]==1)i++;
            else
            {
                j++;
                if(j!=k)i++;
            }
            if(i>*v.rbegin())i=*v.begin();
        }
        cout<<"Case "<<z<<": "<<i<<"\n";
    }
    return 0;
}
