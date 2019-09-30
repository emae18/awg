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
 string checkSchedule(vector <int> tStart, vector <int> tEnd)
 {
    vector<int> limMe=tStart;vector<int> limMay=tEnd;
    int k=0;
    while(find(tStart.begin(),tStart.end(),tEnd[k])==tStart.end() && k<tStart.size())
    {
        k++;
        if(tStart[k]<tEnd[k-1] && tStart[k]>tStart[k-1])return "impossible";
    }

   // cout<<tStart.size()<<"\n"<<k<<"\n";;
    if(k==tStart.size())return "possible";
    else return "impossible";
 }
class OneHandSort
{
   public:
        bool hacer(vector<int> o,vector<int> v)
{
    forin(i,o.size())
        if(o[i]!=v[i])return true;
    return false;
}
void cambiar(vector<int> &v,int index,int cero)
{
    v[cero]=v[index];
    v[index]=-1;
}
 vector<int> sortShelf(vector<int> v)
 {
    vector<int> ord =v;
    sort(ord.begin(),ord.end());
    vector<int> z;
    int may;
    while(hacer(ord,v))
    {
        vector<int> aux(v.size()+1,1);
        aux[aux.size()-1]=-1;
        may=ord[ord.size()-1];
        vector<int>::iterator it=find(v.begin(),v.end(),may);
        int index=distance(v.begin(),it);
        vector<int>::iterator ce=find(v.begin(),v.end(),-1);
        int cero=distance(v.begin(),ce);
        z.push_back(index);
        cambiar(v,index,cero);
    }
    return z;
 }
};



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,-1);
    vector<int> v1(n,-1);
    forin(i,n)cin>>v[i];
    vector<int> k=sortShelf(v);
    forin(i,k.size())cout<<k[i]<<" ";
    return 0;
}
