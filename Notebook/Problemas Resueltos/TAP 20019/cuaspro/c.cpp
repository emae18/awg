#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,queue<int> > m;
    for(int i=0;i<n;i++){cin>>v[i];
        m[v[i]].push(i+1);
    }
    sort(v.begin(),v.end(),greater<int>());
    int cont=0;int x=0;
    vector<int> disparos;
    for(int i=0;i<n;i++){
        cont+=v[i]*x+1;x++;
        disparos.push_back(m[v[i]].front());
        m[v[i]].pop();
    }
    cout<<cont<<"\n";
    for(auto z:  disparos)cout<<z<<" ";
    cout<<"\n";
    return 0;
}
