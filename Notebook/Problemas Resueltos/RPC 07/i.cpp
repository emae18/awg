#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,aux,dias=0;
    bool a=true;
    cin>>n;
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        cin>>aux;
        b[i]=aux-b[i];
    }
    while(a){
        for(int i=0;i<n && a;i++){
            if(b[i]>0){
                if(b[i+1]<0 && i!=n){
                    aux=b[i]+b[i+1];
                    if(i==0 && aux>0) a=false;
                }
                if(b[i-1]<0 && aux>0 && i!=0){
                    aux=b[i]+b[i-1];
                    if(i==n-1 && aux>0) a=false;
                }
                if(aux>0){
                    dias++;
                    a=false;
                }
            }
        }
        if(!a){
            for(int i=0;i<n;i++) b[i]++;
            a=true;
        }else{
            a=false;
        }
    }
    cout<<dias<<endl;
}
