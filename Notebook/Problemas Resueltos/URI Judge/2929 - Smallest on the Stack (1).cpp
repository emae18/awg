#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;string aux; long long mini,k;
    set< long long> s;
    stack< long long> v;
    cin>>n;
    while(n--)
    {
        cin>>aux;
        if(aux=="PUSH"){
            cin>>k;
            s.insert(k);
            v.push(k);
            mini=*s.begin();
        }else if(aux=="POP"){
            if(!v.empty()){s.erase(v.top());v.pop();}
            else
                cout<<"EMPTY"<<"\n";
            }
        else {
            if(!v.empty())
                cout<<*s.begin()<<"\n";
            else cout<<"EMPTY"<<"\n";
        }
    }
    return 0;
}
