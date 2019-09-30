#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main(){
    int n,t;
    cin>>n;int a;
    while(n--)
    {
        cin>>t>>a;
        cout<<((a>t)?"Pekerman se va :(":"Pekerman se queda :)")<<"\n";
    }
    return 0;
}
