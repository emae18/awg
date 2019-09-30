#include<bits/stdc++.h>
using namespace std;
typedef long long ull;
int main()
{
    ull a,b,x,y;
    cin>>a>>b>>x>>y;
    if(a%x==0 && b%y==0){
        cout<<a<<" "<<b<<"\n";
        return 0;
    }else if(a==1 && b==1 && (x!=1 || y!=1)){
        cout<<"0 0\n";
        return 0;
    }else{
        ull g=__gcd(x,y);
        x/=g;
        y/=g;
        ull ans1,ans2;
        ans1=a/x;
        ans2=b/y;
        cout<<x*min(ans1,ans2)<<" "<<y*min(ans1,ans2)<<"\n";

    }

    return 0;
}
