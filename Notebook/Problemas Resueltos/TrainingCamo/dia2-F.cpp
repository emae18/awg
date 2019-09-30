#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++);
#define MOD 1000000007
using namespace std;
typedef long long ll;
std::vector<int> v(100001);

int main()
{
      ios::sync_with_stdio(0);
      cin.tie(0);
      int n,k,a;
      cin>>n>>k>>a;
      std::vector<int> v(n+1);
      int m;
      cin>>m;
      std::vector<int> j(m);
      forin(i,m)cin>>j[i];
      sort(j.begin(),j.end());
      std::vector<int> d;
      for(int i=1;i<j.size();j++)
        d.push_back(abs(j[i]-j[i-1]));
      sort(d.begin(),d.end());
      auto it= upper_bound(d.begin(),d.end(),a);

  return 0;
}
