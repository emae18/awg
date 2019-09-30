#include<bits/stdc++.h>;
using namespace std;
int main()
{
    int n;
    cin>>n;string a;
    cin.ignore();
    while(n--)
    {
        getline(cin,a);
        string aux="";
        for(int i=0;i<10;i++)aux+=a[i];
        if(aux=="Simon says")
        {
            a.erase(0,11);
            cout<<a<<"\n";
        }
    }
    return 0;
}
