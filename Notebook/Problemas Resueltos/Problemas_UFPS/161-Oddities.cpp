#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)
using namespace std;

int main(){
    int n;int t;
    cin>>n;
    while(n--)
    {
        cin>>t;
        cout<<t<<((t%2)?" is odd\n":" is even\n");
    }
    return 0;

}
