#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int main()
{
    string input;
    cin>>input;
    vector<ll> nums;
    string aux="";
    forin(i,input.size()){
        while(input[i]!='+' && i<input.size()){
            aux+=input[i++];
        }
        nums.push_back(stoi(aux));
        aux="";
    }

    set<ll> elements;
    ll actual = 0, calc = 0;
    string DPG = "";
    for(ll i = 0; i < (1 << nums.size()-1); i++)
    {
        calc = 0;
        actual = nums[0];
        for(ll j = 1; j < nums.size(); j++)
        {
            if(i & (1 <<(j-1)))
            {
                calc+=actual;
                actual = nums[j];
            }
            else
            {
                DPG = to_string(actual)+to_string(nums[j]);
                ll sumStr = stoll(DPG);
                actual = sumStr;
            }

        }
        calc+=actual;
        elements.insert(calc);
    }
    cout << elements.size() << "\n";
    return 0;
}
