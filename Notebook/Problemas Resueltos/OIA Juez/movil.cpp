#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
vector<int> v;
void llenar(int &i)
{
    if(i>v.size()-1)i-=v.size()-1;
    if(v[i]){
        i++;
        llenar(i);}
    else
        v[i]=1;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //ifstream cin("truco.in");
    //ofstream cout("truco.out");
    int n;
    cin>>n;
    multiset<int> ms; si s;vector<int> v(n);
    forin(i,n)
    {
        cin>>v[i];s.insert(v[i]);ms.insert(v[i]);
    }
    int autos=0,cont=0,con=0;int peso=0;
    for(auto x : s)
    {
        if(ms.count(x)>=2)
        {
            multiset<int>::iterator it=find(ms.begin(),ms.end(),x);
            multiset<int>::iterator it2=find(ms.begin(),ms.end(),x);
            it2++;it2++;
            ms.erase(it,it2);
            peso+=x*2;
            cont++;
        }
        if(cont==2){con++;cont-=2;}
    }
    cout<<con<<" "<<peso;
    return 0;
}

