#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n;int cont=0;
    cin>>n;
    int t;
    while(n--)
    {
        cin>>t;
        bool band;
        string pal[t];
        for(int i =0;i<t;i++)
        {
            band=true;
            cin>>pal[i];
            for(int j=0;j<pal[i].size()-1;j++)
            {
                if(pal[i][j]=='C' && pal[i][j+1]=='D')band=!band;

            }
            if(band)cont++;
        }
        cout<<cont<<"\n";
        cont=0;
    }
    return 0;
}
