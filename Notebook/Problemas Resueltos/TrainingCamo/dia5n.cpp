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
string ns;
vector<int> has;
vector<string> v(15);
int kmp(const string &T, const string &P) {
  if (P.empty()) return 0;
  vector<int> pi(P.size(), 0);
  for (int i = 1, k = 0; i < P.size(); ++i) {
    while (k && P[k] != P[i]) k = pi[k - 1];
    if (P[k] == P[i]) ++k;
    pi[i] = k;
  }

  for (int i = 0, k = 0; i < T.size(); ++i) {
    while (k && P[k] != T[i]) k = pi[k - 1];
    if (P[k] == T[i]) ++k;
    if (k == P.size()) return i - k + 1;
  }
  return -1;
}
bool buscar(vector<int> h)
{
    set<int> x;
    int k=h.size();
    string aux=ns;
    size_t pos=0;
    forin(i,k)
    {
        size_t x = aux.find(v[h[i]],pos);
        if(x==string::npos)return false;
        pos =(x+v[h[i]].size());
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m>>ns;
    forin(i,m)
    {
        cin>>v[i];
        has.push_back(i);
    }
    int c=0;
    if(buscar(has))
                c++;
    while(next_permutation(all(has)))
           if(buscar(has))
                c++;

    cout<<c<<"\n";
    return 0;
}
