/*
μ(n) está definida para todos los enteros positivos n1​ y tiene valores en {-1, 0, 1} dependiendo en la factorización de n en sus factores primos. Se define como sigue:

μ(n) = 1 si n es libre de cuadrados y tiene un número par de factores primos distintos.
μ(n) = -1 si n es libre de cuadrados y tiene un número impar de factores primos distintos.
μ(n) = 0 si n es divisible por algún cuadrado.

*/
short mu[MAXN] = {0,1};
void mobius(){
	fore(i,1,MAXN)if(mu[i])for(int j=i+i;j<MAXN;j+=i)mu[j]-=mu[i];
}
