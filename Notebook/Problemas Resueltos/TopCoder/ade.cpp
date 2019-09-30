#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,-1);
    vector<int> v1(n,-1);
    forin(i,n)cin>>v[i];
    forin(i,n)cin>>v1[i];
    cout<<checkSchedule(v,v1);
    return 0;
}
