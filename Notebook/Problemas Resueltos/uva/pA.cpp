#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string str;
    cin>>str;
    int i;
    for( i=0;i<str.size();i++){
        if(str[i]=='i'){
            cout<<"Y\n";
            break;
        }
    }
    if(i==str.size())cout<<"N\n";
    /* Otra Forma ->
    if(str.find('i')!=string::npos)
        cout<<"Y\n";
    else
        cout<<"N\n";
    return 0;
}
