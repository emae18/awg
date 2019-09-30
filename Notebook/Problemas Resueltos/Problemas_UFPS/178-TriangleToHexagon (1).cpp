#include <bits/stdc++.h>
#include <ctype.h>
#include<string.h>
#include<algorithm>
#include<set>
#include<iomanip>
#include<vector>
#include<math.h>
using namespace std;
 struct punto{
    float x=0;
    float y=0;
 };
punto incentro(punto a,punto b, punto c,float l1, float l2, float l3);
float dist(punto p1,punto p2);
double calcularRadio(double &r, punto p1, punto p2, punto p3);
 int main()
 {
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
 	//freopen("carga.in","r",stdin);
    int n;
    cin>>n;
    int k;
    float a,b,c;
    double matriz[3][6];
    punto p[3];
    double radio=0;
    while(n--){
        cin>>k;
        cin>>a>>b>>c;
        p[0].x=0;p[0].y=0;
        p[1].x=a;p[1].y=0;
        p[2].x=b;p[2].y=c; double f;
        int j=0;
        for(int i =0; i<3;i++)
        {
            if(j==0)matriz[i][j]=pow(p[i].x,2);
            if(i==2){j++; i=0; }
            if(j==2)matriz[i][j]=pow(p[i].y,2);
            if(j==3)matriz[i][j]=p[i].x;
            if(j==4)matriz[i][j]=p[i].y;
            if(j==4)matriz[i][j]=f;
        }



        punto i = incentro(p[0],p[1],p[2],dist(p[1],p[2]),dist(p[0],p[2]),dist(p[0],p[1]));
        //cout<<"X: "<<i.x<<"\n"<<"Y: "<<i.y<<"\n";
        // Formula de Recta: L(x) = p + tv , siendo v E R^2 el vector dirección
        // p un punto en la recta.
        // t E R es un escalar que representa cuánto  se dilata o contrae el vector v
        radio=calcularRadio(radio,p);
    }
    return 0;
}

double calcularRadio(double &r, punto p1, punto p2, punto p3)
{
    double r=0;
    double ec1[5]= {0,0,0,0,0 } ;
    double ec2[5]= {p2.x^2,p2.y^2 ,p2.x,p2.y,ec1[4]};
    double ec3[5]= {p3.x^2,p3.y^2 ,p3.x,p3.y,ec1[4]};
    double b =
    return
}




float dist(punto p1, punto p2){
    float x=p2.x-p1.x;
    float y=p2.y-p1.y;
    return (powf((powf(x,2.0) + powf(y,2.0)),0.5));
}
 punto incentro(punto a,punto b, punto c,float l1, float l2, float l3){
    punto p1;
    p1.x=(l1*a.x+l2*b.x+l3*c.x)/(l1+l2+l3);
    p1.y=(l1*a.y+l2*b.y+l3*c.y)/(l1+l2+l3);
    return p1;
 }
