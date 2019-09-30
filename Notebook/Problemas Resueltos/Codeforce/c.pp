#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef vector<int> vi;
typedef long long ll;
int main(){
    int t,n;
    cin>>t;
    int may,mini;
    while(t--){
        cin>>n;
        vi v(n);
        forin(i,n)cin>>v[i];
        int cont=0,may=0,minman=v[0];
        forisn(i,1,n){
            if(v[i]<v[i-1]){
                cont+=((v[i]<minman)?may+1:may);
                if(v[i]<minman)minman=v[i];
                may=0;
            }else{
                may++;
            }
        }

        cout<<cont<<"\n";

    }
    return 0;
}
