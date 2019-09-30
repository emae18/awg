#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
bool esRect(double a,double b, double c)
{
    return pow(a,2)==(pow(b,2)+pow(c,2));
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;int a,b;
    cin>>n;
    pair<int,int> v[n];
    forin(i,n)cin>>v[i].first>>v[i].second;
      pair<int,int> v;
    forin(i,n)
    {
        forisn(j,i+1,n)
        {

        }
    }
   return 0;
}
