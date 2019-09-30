#include<iostream>
#include<set>
using namespace std;

int main()
{
    long long y,k,n;bool band=false;
    cin>>y>>k>>n;
    if(k>y && k>=n){cout<<((k>n)?-1:k-y)<<endl;return 0;}
    long long i;
    for(i=y+1;i<=n;i++){
        if(band)break;
        if(i%k==0){
                cout<<i-y<<" ";
                i+=k-1;
                band=true;
        }

    }
    while(i<=n){cout<<i-y<<" ";i+=k;}
    if(!band)cout<<-1<<endl;
    return 0;
}
