#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
typedef set<int> s;
typedef pair<int,int> pii;
int main(){
    int n,m1,o,d,nact,k=0;
    cin>>n>>m1;
    map<int,set<int> > m;
    map<int,int> b;
    int aux,sum=0;
    for(int i=1;i<=n;i++){
        cin>>aux;
        b[i]=aux;
        sum+=aux;
    }
    for(int i=0;i<m1;i++){
        cin>>o>>d;
        m[o].insert(d);
    }
    queue<int>bfs,bfs2;
    bfs.push(1);
    while(k<sum){
        int aa[n+1];
        while(!bfs.empty()){
            nact=bfs.front();
            bfs.pop();
            for(auto x : m[nact]){
                if(x==n &&b[nact]>0){
                    aa[x]++;
                    b[nact]--;
                    continue;
                }
                if(b[nact]>0){
                    b[x]++;
                    b[nact]--;
                }
                bfs.push(x);
            }
        }
        for(int i=1;i<=n;i++)b[i]+=aa[i];
        cout<<b[n]<<"\n";
        k+=b[n];
        b[n]=0;
        bfs2.push(1);
    }

    }

