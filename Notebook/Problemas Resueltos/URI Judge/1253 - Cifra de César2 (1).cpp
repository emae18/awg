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
    cin>>n;int num;
    string cad;
    int a= lcm(2,4);
    while(n--)
    {
        cin>>cad>>x;
        fori(i,cad.size())
        {
            num=((int)cad[i])-x;
            if(num<65)num+=26;
            cad[i]=(char)num;
        }
        cout<<cad<<"\n";
    }

    return 0;
}
