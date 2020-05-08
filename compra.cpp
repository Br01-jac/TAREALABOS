#include "stdio.h"
#include "stdlib.h"
#include"iostream"
using namespace std;

int main(void)
{
    float precio;
    float compra;
    string producto;
    int cantidad;

    cout<<"Ingrese el producto: ";
    cin>>producto;
    cout<<"Cantidad a comprar: ";
    cin>>cantidad;
    cout<<"Precio del producto: ";
    cin>>precio;
    compra=precio*cantidad;
    cout<<"Producto comprado: "<<producto<<endl;
    cout<<"Gasto total es de: $"<< compra<<endl;
    cout<<"Unidades comparadas: "<<cantidad<<endl;
    


system("PAUSE");
return 0;
}