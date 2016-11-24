#include <stdio.h>
#include <stdlib.h>
int main()
{
int divisores=0,otros=0,num,num2;
char dato;
system("color 5f");
do
{
printf("Ingrese un numero(fin con cero):\t");
scanf("%i",&num);
while(num!=0)
{
if(num%9==0)
{
divisores++;
}
else
{
otros++;
}

printf("Ingrese un numero(fin con cero):\t");
scanf("%i",&num);
}
printf("Los numeros ingresados que son divisibles entre nueve son:%i\t\n",divisores);
printf("Los numeros no divisibles entre nueve son:%i\t\n",otros);
fflush(stdin);
printf("\n\t DESEA HACER OTRO CONTEO? s/n:\t");
scanf("%c",&dato);
}
while(dato=='s' || dato=='S');
system("PAUSE");
return 0;
}
