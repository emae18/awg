#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    string str;
    cin>>str;
    int cont=0,cont1=0;
    string str1=str;
    for(int i=0;i<str.size();i+=2){
        if(str[i]==str[i+1]){
            cont++;
            if(str[i]=='a')str[i+1]='b';
            else str[i+1]='a';
        }
    }
    cout<<cont<<"\n"<<str<<"\n";

    return 0;
}
