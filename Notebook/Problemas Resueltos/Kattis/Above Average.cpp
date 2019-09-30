#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c,n;
    cin>>c;
    while(c--)
    {
        double sum=0.00;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        sum/=n;
        int cant=0;
        for(int i=0;i<n;i++){
            if(v[i]>sum)
            cant++;
        }
        cout<<fixed<<setprecision(3)<<cant*100.00/n<<"%\n";
    }
    return 0;
}
