#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


#define Padre(u) int(u)-LSB(int(u))
#define Hijo(u) int(u)+LSB(int(u))


struct fwTree
{
    vector<int> fwSum;
    int N;
    void initFW(int n)
    {
        fwSum.resize(n+1);
        N = n;
    }
    int LSB(int x)
    {
        return x & -x;
    }
//999.999.999
    ll get(int i)
    {
        long long ret = 0;
        for(int x = i; x > 0; x = Padre(x)) ret+= fwSum[x];
        return ret;
    }
    ll get(int a, int b)
    {
        if(a> b) swap(a,b);
        return get(b)-get(a-1);
    }

    void update(int i, int a)
    {
        for(int x = i; x < N+1; x=Hijo(x)) fwSum[x]+= a;
    }

};



int main()
{
    int array1[11] = {5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11};
    fwTree fw1;
    fw1.initFW(11);
    for(int i = 0; i < 11; i++)
    {
        fw1.update(i+1, array1[i]);
    }
    int array2[57] = {12, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11, 6, 6, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11, 6, 6, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11, 6, 5, 6, 11};
    fwTree fw2;
    fw2.initFW(57);
    for(int i = 0; i < 57; i++)
    {
        fw2.update(i+1, array2[i]);
    }
    int I;

    cin >> I;
    int res = I-11;
    ll restoVeces = res%57;
    ll veces = res/57;

//a    16-11= 5
   // ll ans = 2019+( fw1.get(1, ((I < 12) ? I-1 : 11)) + (((res > 0) ? ((veces < 2) ? fw2.get(1,res-1) + (restoVeces != 0 && veces == 1)* restoVeces*fw2.get(1, restoVeces) : fw2.get(1, 57) ))                ((res > 0) ? fw2.get(1, res-1) : 0);
    ll ans = 2019+( fw1.get(1, ((I < 12) ? I : 11)));
    if(res < 58 && res > 0)
    {
        ans+= fw2.get(1, res);
//72199
    }
    else if(res > 0)
    {
        ans+= fw2.get(1, 57)*veces + fw2.get(1, restoVeces);
    }
    cout << ans;
  /*  cout << fw1.get(11) << "\n";
    cout << fw2.get(57);*/
}
