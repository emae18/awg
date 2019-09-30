#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned int k,b, c;
    while(n--)
    {
        cin>>k>>b>>c;
        unsigned int sum=0;
        while(c/b!=0)
        {
            sum=sum+pow(c%b,2);
            c=c/b;
        }
        sum+=pow(c%b,2);
        cout<<k<<" "<<sum<<"\n";
    }
    return 0;
}
