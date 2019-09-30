#include <bits/stdc++.h>
using namespace std;
int main(){
    int Aslice, Pslice, Rwhole, Pwhole;
    cin >> Aslice>>Pslice>>Rwhole>>Pwhole;
    int dslice = Aslice/Pslice;
    int dwhole = (Rwhole*Rwhole*3.1415)/Pwhole;
    cout << ((dslice<dwhole)?"Whole pizza":"Slice of pizza") <<"\n";
    return 0;
}
