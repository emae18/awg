#include <bits/stdc++.h>

using namespace std;

struct Trie{
    bool is=false;
    map<char,Trie> bb;
    Trie(){esta=false;}
};
Trie t;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    t.bb['o'].bb['l'].bb['a'].is=true;
    for(auto x : t)
    {

    }
    return 0;
}
