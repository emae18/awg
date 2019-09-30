#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string elem[n];
//    int count= 0;
    for(int i = 0; i < n; i++)
    {
        cin >> elem[i];
        if(elem[i] != "mumble")
        {
            if(stoi(elem[i]) !=i+1)
            {
                cout << "something is fishy\n";
                return 0;
            }

        }
    }
    cout << "makes sense\n";
}
