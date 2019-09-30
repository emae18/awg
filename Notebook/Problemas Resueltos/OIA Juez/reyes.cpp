#include<bits/stdc++.h>
using namespace std;
int main()
{
  //  ifstream cin("truco.in");
    //ofstream cout("truco.out");
    int n;
    cin>>n;
    vector<int> v(n,1);
    char au;
    int c=40;
    vector<int> v1(c,0);
    for(int i=0;i<c;i++)
        cin>>v1[i]>>au;
    int cont=0; int j=1;vector<int> r1;
    vector<int> inv;bool band=true;
    for(int i=0;i<c;i++)
    {
        band=true;
        if(v1[i]==12)
        {
            cont++;
            if(find(inv.begin(),inv.end(),j)!=inv.end()){band=false;j++;i--;}
            else {inv.push_back(j);
            r1.push_back(j);}
        }
        if(j==n)j=j%n;
        if(band)j++;
        if(cont==n/2)break;
    }
    for(int i=0;i<r1.size();i++)
        cout<<r1[i]<<" ";
    cout<<"\n";
    for(int i=1;i<n+1;i++)
    {
        if(find(r1.begin(),r1.end(),i)!=r1.end())continue;
        cout<<i<<" ";
    }
    return 0;
}
