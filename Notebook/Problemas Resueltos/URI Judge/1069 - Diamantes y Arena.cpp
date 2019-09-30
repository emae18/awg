#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<int(n);i++)
#define forit(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    cin>>n;string cad;
    int a=0,b=0;
    while(n--)
    {
        a=0;b=0;
        cin>>cad;
        fori(i,cad.size())
        {
            if(cad[i]=='<')a++;
            else if(cad[i]=='>' && a>0){a--;b++;}
        }
        cout<<b<<"\n";

    }

    return 0;
}
