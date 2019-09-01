#include <bits/stdc++.h>
using namespace std;
const int maxDP = 250;

int dp[maxDP][maxDP];
string A, B;
int counts = 0;
int LCS(int a, int b)
{
  //  counts = counts+1;
  //  cout << counts << endl;
    if(a == -1 || b == -1) return 0;
    if(dp[a][b] != 0) return dp[a][b];
    if(a > -1 && b > -1 && A[a] == B[b]) return (dp[a][b] = LCS(a-1,b-1)+1);
    if(a > -1 && b > -1 && A[a] != B[b]) return (dp[a][b] = max(LCS(a-1,b), LCS(a, b-1)));
}

int main()
{
    cin >> A >> B;
    memset(dp, false, sizeof(dp));
    int result = LCS(A.size()-1, B.size()-1);
    cout << result << "\n" << counts;
    int a = A.size()-1, b = B.size()-1;
    string retString = "";
    /* backtracking */
    while(a > -1 && b > -1)
    {
        if(A[a] == B[b])
        {
            retString = A[a] + retString;
            a--;
            b--;
            result--;
        }
        else if(dp[a-1][b] > dp[a][b-1]) a--;
        else b--;
    }
    cout << retString << "\n";
    return 0;
}
