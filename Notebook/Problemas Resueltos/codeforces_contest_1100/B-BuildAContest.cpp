#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
    int n,m,aux,b,c;
    set<int> nums;
    cin>>n>>m;
    while(m--)
    {
        cin>>aux;
        nums.insert(aux);
        if(nums.size()==n)
        {
            cout<<1;
            continue;
        }
        cout<<0;
    }
    return 0;
}
