#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double C;
typedef complex<C> P;
int main()
    {
        int n;
        cin>>n;
        vector<P> v(n);
        int a,b;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            v[i].real(a);
            v[i].imag(b);
        }
        int cont=0;
        vector<double> vl(3);
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int x=j+1;x<n;x++)
                {
                    vl[0]=(abs(v[i]-v[j]));
                    vl[1]=(abs(v[x]-v[i]));
                    vl[2]=(abs(v[j]-v[x]));
                    sort(vl.begin(),vl.end());
                    double xx=pow(vl[0],2)+pow(vl[1],2), pp=pow(vl[2],2);
                    if(abs(xx-pp)<0.000000001)cont++;
                }
            }
        }
        cout<<cont<<"\n";
    return 0;
}
