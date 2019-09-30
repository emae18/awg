        #include<bits/stdc++.h>
    #include<complex>
    #define forin(i,n) for(int i=0;i<n;i++)
    #define forisn(i,s,n) for(int i=s;i<n;i++)
    #define X real()
    #define Y imag()
    using namespace std;
    typedef long long ll;
    bool esRect(double a,double b, double c)
    {
        return abs((pow(b,2)+pow(c,2))-pow(a,2))<=0.000000001;
    }
    typedef double C;
    typedef complex<C> P;
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n;
        cin>>n;
        vector<P> v;
        int a,b;
        forin(i,n){
            cin>>a>>b;
            v.push_back({a,b});
        }
        int cont=0;
        double vl[3];
        forin(i,n-2)
        {
            forisn(j,i+1,n-1)
            {
                forisn(x,j+1,n)
                {
                    vl[0]=(abs(v[i]-v[j]));
                    vl[1]=(abs(v[x]-v[i]));
                    vl[2]=(abs(v[j]-v[x]));
                    sort(vl,vl+3);
                   // cout<<lns[2]<<" "<<lns[1]<<" "<<lns[0]<<"\n";
                    if(esRect(vl[2],vl[1],vl[0]))cont++;
                }
            }
        }
        cout<<cont<<"\n";
    //    forin(i,n)cout<<v[i].X<<" "<<v[i].Y<<"\n";

        return 0;
    }
