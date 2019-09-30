#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

struct Trie{
    bool is=false;
    map<char,Trie> nodo;
    void insertar(const string &k,int pos){
        if(pos<k.size())nodo[k[pos]].insertar(k,pos+1);
        else nodo[k[pos]].is=true;
    }
    void insertar(const string &k){insertar (k,0);}
};
Trie t;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string k,k2;
    cin>>k>>k2;
    t.insertar(k);
    t.insertar(k2);
    auto x= t;
    while(!x.is)
    {
        for(auto y : x.nodo)
        cout<<y.first<<"\n";
        x=x.nodo.begin()->second;
    }
    return 0;
}
