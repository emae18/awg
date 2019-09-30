#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long a,b;
    cin>>a;
    long long v[a];long long cont=0;
    for(long long i=0;i<a;i++)
    {
        cin>>v[i];
        if(i){
            for(long long j=1;j<i;j++)
                if((v[j-1]+v[j])%10==0)cont++;
        }
    }
    cout<<cont<<"\n";
    return 0;
}
