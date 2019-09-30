#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main(){
    int n,t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        cout<<((t>79 && t<=99)?t+=1900:t+=2000)<<"\n";
    }
    return 0;
}
