#include<bits/stdc++.h>
using namespace std;
int main()
{
    double v,c,k,c1,c2,c3;
    int t,n,g;
    bool band,cand = false;
    vector<double> b;
    cin>>n;
    c=0;
    c1=0;
    c2=0;
    c3=0;
    while(n--)
        {
            cin>>v;
            b.push_back(v);
            c+=v;
        }
        c1=c*0.45;
        c2=c*0.4;
        c3=c*0.1;


        for(int i=0;i<b.size();i++)
            {

                if(b[i]>=c1)
                    {
                        cout<<"1"<<"\n";
                        band=true;
                        break;
                    }
            }
            if(band!=true)
            {
                for(int s=0;s<b.size();s++)
                    {
                        t=0;
                        k=0;
                            if(b[s]>=c2)
                            {
                                k=b[s]-c3;
                                for(int j=0;j<b.size();j++)
                                    {
                                        if(k>b[j])t++;
                                    }
                                    if(t == b.size())
                                    {
                                        cout<<"1"<<"\n";
                                        cand=true;
                                        break;
                                    }

                            }

                        if(cand==false)cout<<"2"<<"\n";
            }
}
}



