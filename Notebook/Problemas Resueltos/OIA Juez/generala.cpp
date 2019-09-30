#include<iostream>
using namespace std;
set<int> s;
int sum(vector<int> v){
    int c=0;
    for(int i=0;i<v.size();i++){
        c+=v[i];
    }
    return c;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int> > v(n);
    for(int i=0;i<n;i++){
        v[n].resize(m);
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    if()
    return 0;
}
