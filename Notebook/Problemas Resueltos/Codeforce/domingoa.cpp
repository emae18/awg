#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef unsigned long long ll;
typedef vector<int > vi;
typedef vector<long long > vl;
int main()
{
    int n;
    cin>>n;
    vector<int> h(10);
    string str;
    deque<int> libres;
    libres.push_back(0);
    libres.push_back(1);
    libres.push_back(2);
    libres.push_back(3);
    libres.push_back(4);
    libres.push_back(5);
    libres.push_back(6);
    libres.push_back(7);
    libres.push_back(8);
    libres.push_back(9);
    cin>>str;
    int l=0,r=9;
    forin(i,n){
        if(str[i]=='L'){
            h[libres.front()]=1;
            libres.pop_front();
        }else if(str[i]=='R'){
            h[libres.back()]=1;
            libres.pop_back();
        }else {
            h[str[i]-'0']=0;
            libres.push_back(str[i]-'0');
            sort(libres.begin(),libres.end());
        }
    }
    for(auto x : h)cout<<x;
    cout<<"\n";
    return 0;
}
