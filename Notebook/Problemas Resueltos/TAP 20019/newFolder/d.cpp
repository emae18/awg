#include <bits/stdc++.h>
using namespace std;

struct pto{
    double x, y;
    pto(double x= 0, double y = 0):x(x), y(y){}
    pto operator+(pto a){ return pto(x+a.x, y+a.y);}
    pto operator-(pto a){ return pto(x-a.x, y-a.y);}
    pto operator+(double a){ return pto(x+a, y+a);}
    pto operator-(double a){ return pto(x-a, y-a);}
    pto operator*(double a){ return pto(x*a, y*a);}
    pto operator/(double a){ return pto(x/a, y/a);}
    double operator*(pto a) { return x*a.x+y*a.y;}
    double operator^(pto a){ return x*a.y-y*a.x;}
    bool left(pto q, pto r) { return ((q-*this)^(r-*this)) >0;}
    bool operator <(const pto &a) const { return x < a.x-(1e-9) || (abs(x-a.x) < (1e-9) && y<a.y-(1e-9));}
    bool operator ==(pto a) { return abs(x-a.x)<(1e-9) && abs(y-a.y)< (1e-9);}
    double norm(){ return sqrt(x*x+y*y);}
    double norm_sq(){ return (x*x+y*y);}
};
bool isConvex(vector<int> &p)
int main()
{
    int n;
    cin >> n;

}
