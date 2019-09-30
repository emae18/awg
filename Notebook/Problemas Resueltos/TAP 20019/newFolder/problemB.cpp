#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;


int main()
{
    string a;
    cin>>a;
    if(a[a.size()-1]=='a')
    {
        a[a.size()-1]='i';
        a.push_back('c');
        a.push_back('a');
    }else if(a[a.size()-1]=='o')
    {
        a[a.size()-1]='i';
        a.push_back('c');
        a.push_back('o');
    }
    cout<<a<<"\n";
    return 0;
}
