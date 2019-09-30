#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
typedef long long ll;
/*typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;*/
using namespace std;
string v[100][100];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int digitos,col,fila;
    map<int,string> braile;
    vector<string> inbraile;
    string D,C;
    braile[1]="*.....";
    braile[2]="*.*...";
    braile[3]="**....";
    braile[4]="**.*..";
    braile[5]="*..*..";
    braile[6]="***...";
    braile[7]="****..";
    braile[8]="*.**..";
    braile[9]=".**...";
    braile[0]=".***..";
    while(cin>>digitos){
        if(digitos==0)break;
        cin>>D;
        if(D=="S"){
            cin>>C;
            fila=3;
            col=0;
            while(fila){
                for(int i=0;i<digitos;i++){
                    (i!=C.size()-1)?
                        cout<<braile[(int)C[i]-48][col]<<braile[(int)C[i]-48][col+1]<<" ":
                        cout<<braile[(int)C[i]-48][col]<<braile[(int)C[i]-48][col+1]<<"\n";
                }
                col+=2;
                fila--;
            }
        }else if (D=="B"){
            fila=3;
            while(fila){
                for(col=0;col<digitos;col++){
                    cin>>C;
                    if(inbraile.size()<digitos){
                        inbraile.push_back(C);
                    }else{
                        inbraile[col]+=C;
                    }
                }
                fila--;
            }
            for(int i=0;i<inbraile.size();i++){
                for(map<int,string>::iterator it=braile.begin();it!=braile.end();++it){
                    if(inbraile[i]==it->second){
                        (i!=inbraile.size()-1)?cout<<it->first:cout<<it->first<<"\n";
                    }
                }

            }
        }
    }
    return 0;
}
