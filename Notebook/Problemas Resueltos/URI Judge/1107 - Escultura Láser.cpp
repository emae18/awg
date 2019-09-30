#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,c,x;int cont;
    while(true)
    {
        cin>>a>>c;
        if(a==0 && c==0)break;
        vector<int,0> m[10001];
        fori(i,c){
            cin>>x;
            fori(j,x)
                m[j].push_back(1);
        }
        int k=0;
        while(k<a)
        {

            k++;
        }
        fori(i,a){
            fori(j,c)
                cout<<m[i][j]<<" ";
            cout<<"\n";
        }

    }
    return 0;
}
