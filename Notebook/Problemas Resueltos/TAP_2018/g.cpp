#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef float C;
typedef complex<C> P;
int main()
    {
        int n;
        cin>>n;
        vector<P> v(n);
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            v[i] = {a, b};
        }
        int cont=0;
        vector<C> vl(3);
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int x=j+1;x<n;x++)
                {
                    vl[0]=pow((abs(v[i]-v[j])), 2);
                    vl[1]=pow((abs(v[x]-v[i])), 2);
                    vl[2]=pow((abs(v[j]-v[x])), 2);
                    cout<<vl[0]<<" "<<vl[1]<<" "<<vl[2]<<endl;
                    sort(vl.begin(),vl.end());
                    if(abs((vl[0] + vl[1]) - v[2]) < 0.000000001) cont++;
                }
            }
        }
        cout<<cont<<"\n";
    return 0;
}

