#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main(){
    int n,t;
    set<int> cor;
    cin>>n;int a;
    while(n--)
    {
        cin>>t;
        while(t--)
        {
            cin>>a;
            cor.insert(a);
        }
        cout<<*cor.rbegin()-*cor.begin()<<"\n";
        cor.clear();
    }
    return 0;
}
