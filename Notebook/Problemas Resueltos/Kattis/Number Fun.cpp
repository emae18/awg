#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a,b,r;
    while(n--)
    {
        cin>>a>>b>>r;bool ok=false;
        int m=max(a,b);
        int p=min(a,b);
        if(r>=m)
            {if((m*p==r )|| (m+p==r))ok=true;}
        if(r<m)
          {
            if((m/p==r && m%p==0) || m-p==r)ok=true;}
        cout<<((ok)?"Possible\n":"Impossible\n");
    }
    return 0;
}
