#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,c,x;int cont;
    map<int,int> pos;
    int n,q;x=0;int aux;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)break;
        cout<<"CASE# "<<x+1<<":\n";
        vector<int> v(n,0);
        fori(i,n)
        {
            cin>>aux;
            v[i]=aux;
        }
        sort(v.begin(),v.end());
        fori(i,q)
        {
            cin>>aux;
            vector<int>::iterator it = find(v.begin(), v.end(), aux);
            if(it!=v.end()){
                    int index=distance(v.begin(),it);
                    cout<<aux<<" found at "<<index+1<<"\n";
            }else
            cout<<aux<<" not found\n";
        }
        x++;
    }
    return 0;
}
