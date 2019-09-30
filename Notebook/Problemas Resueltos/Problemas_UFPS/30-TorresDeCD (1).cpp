#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
    int n, op;
    stack<int> torre;
    cin>>n;int aux;
    while(n--)
    {
        cin>>op;
        for(int i=0;i<op;i++)
        {
            cin>>aux;
            if(aux!=0)torre.push(aux);
            else{ cout<<torre.top()<<"\n";torre.pop();}
        }
    }
    return 0;
}
