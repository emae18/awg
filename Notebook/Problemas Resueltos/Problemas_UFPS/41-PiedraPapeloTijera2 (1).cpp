#include <bits/stdc++.h>

using namespace std;
 int main()
 {
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	//freopen("carga.in","r",stdin);
    int n;
    string a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a==b){cout<<"Empate"<<"\n";continue;}
        if((((a=="tijera" && b=="papel"  )||( a=="tijera" && b=="lagarto")) )||
            (((a=="piedra" && b=="lagarto"  )||( a=="piedra" && b=="tijera"))) ||
        (((a=="papel" && b=="piedra"  )||( a=="papel" && b=="spock"))) ||
        ( ((a=="lagarto" && b=="spock"  )||( a=="lagarto" && b=="papel"))) ||
        (((a=="spock" && b=="tijera"  )||( a=="spock" && b=="piedra"))))cout<<"Sheldon"<<"\n";
        else cout<<"Rajesh"<<"\n";
    }
    return 0;
}
