#include <bits/stdc++.h>
using namespace std;

/*
    Aqui tienes que hacer la función recursiva
    de transitividad cuando vuelvas de dibujo
    recuerda que A->B y si B.sz()!=0
    XeB
    A->{x} B U B;
    (y)
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    map<string,set<string> > ma;
    map<string,set<string> > maR;
    while(n--){
        string a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        ma[a].insert(e);
        maR[e].insert(a);
    }
    while(m--){
        int f=false,f2=false;
        string a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
                if(ma[a].find(e)!=ma[a].end()){
                    cout<<"Fact\n";
                    f=true;
                }
        if(!f){
            if(maR[a].find(e)!=maR[a].end()){
                    cout<<"Alternative Fact\n";
                    f2=true;
                }
        }
        if(!f && !f2)
            cout<<"Pants on Fire\n";
    }
    return 0;
}
