#include<iostream>
#include <vector>
using namespace std;
struct Resultado
{
    long long suma, producto, maximo, minimo;
};
void procesaMatriz(vector<vector<int> > matriz, vector<long long> &resultadoEnArreglo, Resultado &resultadoEnRegistro)
{
    int j=0;
    resultadoEnRegistro.suma = 0;
    resultadoEnRegistro.producto = 1;
    resultadoEnRegistro.maximo = 0;
    resultadoEnRegistro.minimo = 11;
    resultadoEnArreglo.resize(4);
    while(j<matriz.size())
    {
            for(int i=0;i<matriz[j].size();i++)
            {
                resultadoEnRegistro.suma+=matriz[j][i];
                resultadoEnRegistro.producto*=matriz[j][i];
                resultadoEnRegistro.maximo=((matriz[j][i]>resultadoEnRegistro.maximo)?matriz[j][i]:resultadoEnRegistro.maximo);
                resultadoEnRegistro.minimo=((matriz[j][i]<resultadoEnRegistro.minimo)?matriz[j][i]:resultadoEnRegistro.minimo);
                }
            j++;
    }
    resultadoEnArreglo[0]=resultadoEnRegistro.suma;
    resultadoEnArreglo[1]=resultadoEnRegistro.producto;
    resultadoEnArreglo[2]=resultadoEnRegistro.maximo;
    resultadoEnArreglo[3]=resultadoEnRegistro.minimo;
 }

 int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int> > matriz;
    matriz.resize(n);
    for (int i=0;i<n;i++)
    {
        matriz[i].resize(m);
        for (int j=0;j<m;j++)
            cin >> matriz[i][j];
    }
    vector<long long> resultadoEnArreglo;
    Resultado resultadoEnRegistro;
    procesaMatriz(matriz, resultadoEnArreglo,  resultadoEnRegistro);
    for (int i=0;i<int(resultadoEnArreglo.size());i++)
    {
        if (i > 0) cout << " ";
        cout << resultadoEnArreglo[i];
    }
    cout << endl;
    cout << resultadoEnRegistro.suma     << " " <<
            resultadoEnRegistro.producto << " " <<
            resultadoEnRegistro.maximo   << " " <<
            resultadoEnRegistro.minimo   << endl;
    return 0;
}

