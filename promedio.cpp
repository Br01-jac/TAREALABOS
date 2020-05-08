#include "stdio.h"
#include "stdlib.h"
#include"iostream"
using namespace std;

int main(void)
{
 int num1;
 int num2;
 int num3;
 int promedio;

 printf("Ingrese la primera nota:");
 scanf("%i",&num1);
printf("Ingrese la segunda nota:");
 scanf("%i",&num2);
printf("Ingrese la tercera nota:");
 scanf("%i",&num3);
 promedio=(num1+num2+num3)/3;
 
printf("El promedio es: %i \t",promedio);

return 0;

}