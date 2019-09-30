#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%100==0)
    {
        if(n%400==0){cout<<"SI\n";}
        else cout<<"NO\n";
        return 0;
    }else if(n%4==0)cout<<"SI\n";
    else cout<<"NO\n";
    return 0;
}
