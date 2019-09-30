#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int mayNum = n;

    for(int i = n-1; i > -1; i--)
    {
        if(ar[i] == mayNum)
        {
            mayNum--;
        }
    }
    cout << mayNum;

}
