#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<long long> s;
    long long ms=0LL;
    long long aux;
    for(int i=0;i<n;i++){
        cin>>aux;
        s.insert(aux);
        ms+=aux;
    }
    if(s.size()==1){
        cout<<"YES\n";
        return 0;
    }
    long long k=*s.rbegin();
    if(ms%2!=0 || k>ms-k){
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";

    return 0;
}
