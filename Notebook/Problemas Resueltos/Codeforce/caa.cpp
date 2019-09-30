#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef vector<int> vi;
typedef long long ll;
int main(){
    string g;
    while(cin>>g){
    if(g.find('i')!=string::npos)cout<<"N\n";
    else cout<<"S\n";
    }
    return 0;
}
