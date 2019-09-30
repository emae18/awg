#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
bool visited[15001];
vector<vector<int> > g(15001);
set<int> s;
int ver(int a){
    int c=0;
    for(auto x: g[a]){
        if(!visited[x])c++;
    }
    return c;
}
int cont=0;
int bfsa(int a){
    int actual;
    int sum=0;
    queue<int> bfs;
    bfs.push(a);
    visited[a]=true;
    while(!bfs.empty()){
        actual=bfs.front();
        sum+=ver(actual);
        bfs.pop();
        for(auto x: g[actual]){
            if(!visited[x])
                bfs.push(x);
        }
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    forin(i,n){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    forin(x,n){
       memset(visited,false,sizeof(visited));
       s.insert( bfsa(x));
    }
    cout<<*s.rbegin()<<"\n";
    return 0;
}
