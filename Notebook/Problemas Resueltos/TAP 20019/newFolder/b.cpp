#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double EPS = 1e-9;
#define INF 1e9
/*struct pto{
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
    bool operator <(const pto &a) const { return x < a.x-(EPS) || (abs(x-a.x) < (EPS) && y<a.y-(EPS));}
    bool operator ==(pto a) { return abs(x-a.x)<(EPS) && abs(y-a.y)< (EPS);}
    double norm(){ return sqrt(x*x+y*y);}
    double norm_sq(){ return (x*x+y*y);}
};
double dist(pto a, pto b){ return (b-a).norm();}
typedef pto vec;
double angle(pto a, pto o, pto b)
{
    pto oa = a-o, ob=b-o;
    return atan2(oa^ob, oa*ob);
}
pto rotate(pto p, double theta)
{
    return pto(p.x*cos(theta)-p.y*sin(theta), p.x*sin(theta)+p.y*cos(theta));
}
vec perp(vec v) { return vec(-v.y,v.x);}


int sgn(ll x)
{
    return x<0? -1: !!x;
}

struct line{
    line(){}
    double a, b, c;
    line(double a, double b, double c) : a(a), b(b), c(c) {}
    line(pto q, pto p) : a(q.y-p.y), b(p.x-q.x), c(a*p.x+b*p.y){}
    int side(pto p) { return sgn(ll(a) * p.x + ll(b) * p.y - c);}
};
bool parallels(line l1, line l2){
    return abs(l1.a*l2.b-l2.a*l1.b)< EPS;
}
pto inter(line l1, line l2){
    double det = l1.a*l2.b-l2.a*l1.b;
    if(abs(det) < EPS) return pto(INF, INF);
    return pto(l2.b*l1.c-l1.b*l2.c, l1.a*l2.c-l2.a*l1.c)/det;
}
line bisector(pto x, pto y)
{
    line l = line(x, y);
    pto m = (x+y)/2;
    return line (-l.b, l.a, -l.b*m.x+l.a*m.y);
}
struct Circle{
    pto o;
    double r;
    Circle(pto x, pto y, pto z)
    {
        o = inter(bisector(x,y), bisector(y,z));
        r = dist(o, x);
    }

};
/*
struct pto
{
    int x, y, r;
};

bool comp(const pto &a, const pto &b)
{
    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y)) <= a.r*a.r ||  sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)) <= b.r*b.r;
}*/
struct pto
{
    int x, y, r;
};
bool comp(pto a, pto b)
{
    int A1 = (b.x-a.x)*(b.x-a.x);
    int B1 = (b.y-a.y)*(b.y-a.y);
    int R1 = a.r*a.r;


    int A2 = (a.x-b.x)*(a.x-b.x);
    int B2 = (a.y-b.y)*(a.y-b.y);
    int R2 = b.r*b.r;
    /*cout << sqrt(A1+B1) << " " << (a.r+b.r) << endl;
    cout << sqrt(A2+B2) << " " << (a.r+b.r) << endl;*/
    cout << (a.r+b.r)*(a.r+b.r )<< " " << A1+B1;
    return (a.r+b.r)*(a.r+b.r) == A1+B1;// || A2+B2 >= R2;
}
int main()
{
    int n;
    cin >> n;
    pto puntos[n];
    bool band = true;
    for(int i = 0; i < n; i++)
    {
        cin >> puntos[i].x >> puntos[i].y >> puntos[i].r;
        for(int j = 0; j < i;j++)
        {
            if(comp(puntos[i], puntos[j]))
            {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "SI\n";
    return 0;
}
