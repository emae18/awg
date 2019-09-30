#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main(){
    int n,t;
    int a,p,menor;
    fori(i,10)
    {
        cin>>a;
        cout<<"X["<<i<<"] = "<<((a<=0)?1:a)<<"\n";
    }
    return 0;
}

