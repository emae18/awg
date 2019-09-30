#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct pais{
    char  nombre[20];
    char idioma[15];
    int habitantes;
    int tama;
    struct pais *prox;
}*inicio=NULL;

typedef struct pais *Tlista;
Tlista vector_pais[6]={NULL,NULL,NULL,NULL,NULL,NULL};
void mostrar(Tlista lis)
{
    Tlista aux=lis;
    while(aux->prox!=NULL)
    {
        cout<<aux->nombre<<"\n";
    }

}
void altaInicio(Tlista &lista, int pos){
    Tlista nuevo;
    nuevo= new(struct pais);
    cout<<"Ingrese nombre de Pais: ";
    cin>>nuevo->nombre;
    cout<<"Ingrese cantidad de habitantes: ";
    cin>>nuevo->habitantes;
    cout<<"Ingrese idioma: ";
    cin>>nuevo->idioma;
    cout<<"Ingrese tamaño: ";
    cin>>nuevo->tama;
    nuevo->prox=NULL;
    if(lista==NULL){
        lista=nuevo;
    }
    else
    {
        nuevo->prox=lista;
        lista=nuevo;
    }
    lista=vector_pais[pos];
}
void altaFinal(Tlista &lista,int pos){
    Tlista nuevo,aux;
    aux= new(struct pais);
    nuevo= new (struct pais);
    cout<<"Ingrese nombre de Pais: ";
    cin>>nuevo->nombre;
    cout<<"Ingrese cantidad de habitantes: ";
    cin>>nuevo->habitantes;
    cout<<"Ingrese idioma: ";
    cin>>nuevo->idioma;
    cout<<"Ingrese tamaño: ";
    cin>>nuevo->tama;
    nuevo->prox=NULL;
    if(lista==NULL)
    {
        lista=nuevo;
    }
    else{
        aux=lista;
        while(aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=nuevo;
    }
    lista=vector_pais[pos];
}
int main(){
    int opc,opcion,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0;
    Tlista lista1=NULL,lista2=NULL,lista3=NULL,lista4=NULL,lista5=NULL;

    do{
        cout<<"                     MENU DE OPCIONES                        "<<endl;
        cout<<" 1) Cargar paises"<<endl;
        cout<<" 2) Mostrar contitnente con mayor cantidad de paises cargados"<<endl;
        cout<<" 3) Mostrar el pais con mayor dimension de cada continente"<<endl;
        cout<<" 4) Eliminar un pais"<<endl;
        cout<<" 5) Mostrar todos los paises"<<endl;
        cout<<" 6) Salir"<<endl;
        cout<<" SELECCIONE UNA OPCION: ";
        cin>> opc;
        switch(opc){
    case 1:
            cout<<" Los paises deben cargarse segun su continente: "<<endl;
            cout<< " 1) Europa"<<endl;
            cout<< " 2) Africa"<<endl;
            cout<< " 3) Oceania"<<endl;
            cout<< " 4) Asia"<<endl;
            cout<< " 5) America"<<endl;
        cout<< " SELECCIONE CONTINENTE: ";
        cin>>opcion;
        switch(opcion){
    case 1:
        altaInicio(lista1,opcion);
        break;
    case 2:
        altaInicio(lista2,opcion);
        break;
    case 3:
        altaInicio(lista3,opcion);
        break;
    case 4:
        altaFinal(lista4,opcion);
        break;
    case 5:
        altaFinal(lista4,opcion);
        break;
        }
    case 2: mostrar(lista1);
    case 8:
        break;
    }

    }while(opc!=6);
return 0;
}
