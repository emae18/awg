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
    double num;double r=0.00;
    string cad,cad2;int i=0;
    while(getline(cin,cad) && cin>>num)
    {
        cin.ignore();
        r+=num;
        i++;
    }
    r=r/i;
    cout<<fixed<<setprecision(1)<<r<<"\n";
        return 0;
}
