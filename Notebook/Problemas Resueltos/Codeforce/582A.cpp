#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef vector<int> vi;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vi v(n);
    forin(i,n)cin>>v[i];
    sort(all(v));
    int m1=0,m2=0;
    int mid=v[n/2];
    forisn(i,0,n){
        if((v[i]%2==0 && mid%2!=0) || (v[i]%2!=0 && mid%2==0)){
            m1++;
        }
        if((v[i]%2!=0 && mid%2!=0) || (v[i]%2==0 && mid%2==0)){
            m2++;
        }
    }
    cout<<min(m1,m2)<<"\n";
    return 0;
}
