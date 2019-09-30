#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,dif;
    string fila;
    cin>>n;
    while(n--)
    {
        cin>>t;
        cin>>fila;
        int m=0,w=0;
            for(int i=0;i<fila.length();i++)
            {
                if(dif==t)
                {
                    if(m>w)
                    {
                            if(fila[i]=='M' && fila[i+1]=='M' ){i=fila.length();m--;}

                    }else{
                            if(fila[i]=='W' && fila[i+1]=='W' ){i=fila.length();w--;}

                    }
                }
                if(fila[i]=='M')m++;
                else w++;
                dif=abs(max(w,m)-min(w,m));
            }
            cout<<m+w<<"\n";
    }
    return 0;
}
