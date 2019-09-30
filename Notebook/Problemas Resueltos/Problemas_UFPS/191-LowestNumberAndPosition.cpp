#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main(){
    int n,t;
    cin>>n;int a,p,menor;
    cin>>a;
    menor=a;
    p=0;
    fori(i,n-1)
    {
        cin>>a;
        if(a<menor){menor=a;p=i;}
    }
    cout<<"Menor valor: "<<menor<<"\n";
    cout<<"Posicao: "<<p+1<<"\n";
    return 0;
}
