#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)

using namespace std;

int main(){
    int n,cont=0;
    cin>>n;bool igual=false;
    while(cin>>n)
    {
        int s[n];
        int f[n];
        while(n--)
        {
            fori(i,n)
                cin>>s[n];
            fori(i,n)
                cin>>f[n];
        }
        int a=0;
        while(!igual)
        {
            cont++;
            if(iguales(s,f))igual=true;
            else swap(s[a],f[a+1])
        }
    }
    return 0;
}
