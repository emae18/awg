#include <bits/stdc++.h>
using namespace std;

struct test
{
};
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int results[n];
    cin >> ar[0];
    results[0] = 0;
    cout << "0 ";
    for(int i = 1; i < n; i++)
    {
        cin >> ar[i];
        int j= 0;
        for(j = i-1; j > -1 ; j--)
        {
            if(ar[j] < ar[i]) break;
            if(ar[i] < ar[j])
            {
                j = results[j];
                continue;
            }
        }
        results[i] = ((j <= -1) ? 0: j+1);
    }
    for(int i  = 1; i < n; i++)
    {
        cout << results[i] << " ";
    }
}
