#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
char vocals[5]={'a','e','i','o','u'};
string pit (string w,int i)
{
    string aux;
    if(w.size()==1 && find(vocals,vocals+5,w[0])==vocals+5)
    {
        w= toupper(w[0]);
        w+="ay";
        return w;
     }
    if(find(vocals,vocals+5,w[0])!=vocals+5)
    {
        if(i==0)w[0]=toupper(w[0]);
        return w+"ay";
    }
    if(find(vocals,vocals+5,w[0])==vocals+5 && find(vocals,vocals+5,w[1])!=vocals+5)
    {
         char u=tolower(w[0]);
        aux=w.substr(1);
        if(i==0)aux[0]=toupper(aux[0]);
        aux+=u;aux+="ay";
        return aux;
    }
    char u=tolower(w[0]),k=w[1];
    aux=w.substr(2);
    if(i==0)aux[0]=toupper(aux[0]);
    aux+=u;aux+=k;aux+="ay";
    return aux;



}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cin.ignore();
    string aux;
    while(n--)
    {
        getline(cin,aux);
        stringstream ss(aux);string word;ll i=0;
        while(ss>>word)
        {
            cout<<pit(word,i)<<" ";
            i++;
        }
        cout<<"\n";
    }

    return 0;
}
