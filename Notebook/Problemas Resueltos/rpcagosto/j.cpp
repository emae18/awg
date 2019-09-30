#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(x,v) for(auto x: v) cout<<x <<" ";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n);
    forin(i,n)cin>>v[i];
    vi c;
    forin(i,10)if(!binary_search(all(v),i))c.push_back(i);
    int canal;
    cin>>canal;
    int sz=c.size();
    vi tele(all(c));
    forin(i,sz){
        forin(j,sz){
            forin(x,sz){
                vi aux(3);
                aux[0]=c[i];
                aux[1]=c[j];
                aux[2]=c[x];
                    tele.push_back(aux[0]*100+aux[1]*10+aux[2]);
                while(next_permutation(all(aux))){
                    tele.push_back(aux[0]*100+aux[1]*10+aux[2]);
                    tele.push_back(aux[0]*10+aux[1]);
                    tele.push_back(aux[1]*10+aux[2]);
                    tele.push_back(aux[0]*10+aux[2]);
                    tele.push_back(aux[2]*10+aux[1]);
                    tele.push_back(aux[2]*10+aux[0]);
                    tele.push_back(aux[2]*10+aux[1]);
                }
                tele.push_back(c[i]*10+c[i]);
                tele.push_back(c[j]*10+c[j]);
                tele.push_back(c[x]*10+c[x]);
                tele.push_back(c[i]*100+c[i]*10+c[i]);
                tele.push_back(c[j]*100+c[j]*10+c[j]);
                tele.push_back(c[x]*100+c[x]*10+c[x]);
            }
        }
    }
    set<int> s(all(tele));
    /*if(canal<=*s.begin())cout<<*s.begin()-canal<<"\n";
    else if(canal>=*s.rbegin())cout<<canal-*s.begin()<<"\n";
    else{*/
        vi sv(all(s));
       //mostrar(k,sv);
       //cout<<"\n";
        int x =distance(sv.begin(),lower_bound(all(sv),canal));
        if(abs(canal-sv[x-1])<abs(canal-sv[x]) && x>0){
            cout<<abs(canal-sv[x-1])<<"\n";
        }else cout<<abs(canal-sv[x])<<"\n";
   // }
    return 0;

}
