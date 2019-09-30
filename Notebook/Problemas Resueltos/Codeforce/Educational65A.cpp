#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,n;string a;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        if(a.find('8')!=string::npos)
        {
            if(a[0]=='8' && a.size()==11)cout<<"YES\n";
            else
            {
                size_t it=a.find('8');
                string aux= a.substr(it,a.size()-it);
                if(aux.size()>=11)cout<<"YES\n";
                else cout<<"NO\n";
            }
        }else cout<<"NO\n";
    }
    return 0;
}
