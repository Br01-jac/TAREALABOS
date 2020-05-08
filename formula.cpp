#include "stdio.h"
#include"iostream"
#include"math.h"
using namespace std;

int main(void)
{
float a,b,c,formula;
cout<<"Introduce el valor de a:";
cin>>a;
cout<<"Introduce el valor de b:";
cin>>b;
cout<<"Introduce el valor de c:";
cin>>c;
formula=(-b + sqrt (b * b - 4 * a * c) / 2 * a);
cout<<"El resultado de la formula es:"<<endl<<formula<<endl;
    system("PAUSE");
    return 0;
}