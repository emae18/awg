#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<int(n);i++)
#define forit(i,n) for(typeof n.begin() i=n.begin();i!=n.end();i++)

typedef long long ll;

using namespace std;
bool exista(map<int,int> di, int k)
{
    string cad="";
    cad=to_string(k);
    map<int,int>::iterator it;
    fori(z,cad.size())
    {
        it = di.find(cad[z]-'0');
        if(it==di.end())
            return false;
        else
            di[cad[z]-'0']--;
        if(it->second<0)return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string dig;
    cin>>dig;
    map<int,int> di;
    fori(i,dig.size())
            di[dig[i]-'0']++;
    long long k=1;
    while(exista(di,k))
        k++;
    cout<<k<<"\n";
    return 0;
}
