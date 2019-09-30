#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    vector<int> v;
    float votos,c,c1,c2,c3,aux;
    bool band=false;
    cin>>n;
    while(n--)
        {
          cin>>votos;
          c+=votos;
          v.push_back(votos);
        }

        c1=c*0.45;
        c2=c*0.4;
        c3=c*0.1;

        for(int i=0;i<v.size();i++)
            {
                if(v[i]>=c1)
                {cout<<"1"<<"\n";
                band=true;
                break;}
                else
                    {
                        aux=0;
                        if(v[i]>=c2)
                            {
                              aux=v[i]-c3;
                             for(int j=0;j<v.size();j++)
                                {
                                    if(v[i]!=v[j] && aux>=v[j])s++;
                                }

                             if(v.size()-1==s){
                                 cout<<"1"<<"\n";
                             band=true;
                                break;}

                            }
                    }
            }
            if(band==false)cout<<"2"<<"\n";
            return 0;
}
