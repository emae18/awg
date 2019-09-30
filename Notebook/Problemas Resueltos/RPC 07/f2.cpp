#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b){return ((a*b)/__gcd(a,b));}
int main()
{
    int n;
    cin>>n;
    while(n--){
        string a,b;
        int c,d;
        cin>>a>>c>>b>>d;
        int cm=lcm(c,d);
        int k1=cm/c;
        int k2=cm/d;
        if(a==b){
            cout<<a<<2<<"\n";
            continue;
        }
        if(k1==1 && k2==1){
            cout<<a<<b<<"\n";
        }else if(k1==1 && k2!=1){
            cout<<a<<b<<k2<<"\n";
        }else if(k2==1){
            cout<<a<<k1<<b<<"\n";
        }else cout<<a<<k1<<b<<k2<<"\n";
    }
    return 0;
}
