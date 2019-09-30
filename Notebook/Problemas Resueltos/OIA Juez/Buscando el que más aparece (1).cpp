#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    //cin.tie(0);
    int n;
    cin>>n;int a;
    multiset<int>  m;
    set<int> s;
    while(n--){
     cin>>a;
     m.insert(a);s.insert(a);
    }
    set<int>::iterator it=s.begin();
    a= m.count(*it);
    int p =*it;
    it++;
    while(it!=s.end())
    {
        if(m.count(*it)>a){a=m.count(*it);p=*it;}
        it++;
    }
    cout<<p<<" "<<a<<"\n";

    return 0;
}
