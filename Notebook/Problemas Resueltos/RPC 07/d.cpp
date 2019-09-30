#include <bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, num, m_pos,acum,ans;
    vector <int>base;
    cin >> n;
    int m = INT_MAX;
    for(int i = 0; i< n; i++)
    {
        cin>>num;
        if(num<m)
        {
            m = num;
            m_pos = i;
        }
        base.push_back(num);
    }
    if(count(base.begin(),base.end(),0) == n){
        cout << 1 << "\n";
        return 0;
    }
    if(count(base.begin(),base.end(),base[0]==n)){
        cout << base[0] << "\n";
        return 0;
    }
    ans = 0;
    if(m_pos == 0)
    {
        for(int i =0; i<=m; i++)
        {
            acum = m - i;
            for(int j = m_pos; j<n; j++)
            {
                acum = base[j] - acum;
                if(acum <0)
                    break;
            }
            if(acum>0)
                ans ++;
        }
        cout << ans << "\n";
        return 0;
    }
    if(m_pos == n-1)
    {
        for(int i =0; i<=m; i++)
        {
            acum = m - i;
            for(int j = m_pos; j>-1; j--)
            {
                acum = base[j] - acum;
                if(acum <0)
                    break;
            }
            if(acum>0)
                ans ++;
        }
        cout << ans << "\n";
        return 0;
    }

    for(int i =0; i<=m; i++)
    {
        acum = m - i;
        for(int j = m_pos; j<n; j++)
        {
            acum = base[j] - acum;
            if(acum <0)
                break;
        }
        acum = m - i;
        for(int j = m_pos-1; j>-1 && acum > 0; j--)
        {
            acum = base[j] - acum;
            if(acum <0)
                break;
        }
        if(acum>0)
            ans ++;
    }
    cout << ans << "\n";
    return 0;

    return 0;
}
