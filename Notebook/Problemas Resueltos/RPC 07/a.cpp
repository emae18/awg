#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[n];
    int cont=0;
    map<int,int> m;
    forin(i,n){
        cin>>v[i];
        m[v[i]]=1;
    }
    sort(v,v+n);
    forin(i,n){
        forisn(j,i+1,n){
            if(v[j]%v[i]==0 && m[v[j]]==1)
               {
                 m[v[j]]=0;
                 cont++;
               }
        }
    }
    if(cont==0)cout<<n<<"\n";else
    cout<<cont<<"\n";
    return 0;
}
