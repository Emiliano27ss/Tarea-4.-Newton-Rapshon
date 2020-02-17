/*Alumno: Emiliano Sanchez Olivares
Grupo: 2SV2
Curso: Metodos Numericos
Tarea: 4.2
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
float xInicial, error;
float raiz,e_test=0,f_Xi,fprima_Xi,f_xr,f_xanterir,xr,xranterior;
int cont;
float f_x(float x)
{
    return (2*(pow(x,2))-x-5);
}
float fprima_x(float x)
{
    return (4*x-1);
}

float newtonraphson(float Xi, float e)
{
    cont=0;
do{
   //operaciones
f_Xi=f_x(Xi);
fprima_Xi=fprima_x(Xi);
xr=Xi-(f_Xi/fprima_Xi);
if(xr==0){break;}
printf("\nValor de xr:%f",xr);
printf("\nValor de xi:%f",Xi);
printf("\nValor de f_xi:%f",f_Xi);
printf("\nValor de fprima de Xi :%f",fprima_Xi);
e_test=fabs(xr-Xi);
Xi=xr;

printf("\nValor del error:%f\n\n",e_test);
cont=cont+1;
}
while(e_test>e);
raiz=xr;
printf("Numero de iteraciones:%i",cont);
return raiz;
}
int main()
{
printf("\n\tPrograma que calcula la raiz de la funcion   2x^2 -x -5. por el metodo de Newton raphson   ");

printf("\nDigita un valor inicial para empezar a evaluar la funcion mayor a 1");
printf("\nX inicial: ");
scanf("%f",&xInicial);

printf("\nDigita el error permitido: ");
scanf("%f",&error);

newtonraphson(xInicial,error);
printf("\nEL valor de la primer raiz es aproximadamente:%f",raiz);

printf("\nDigita un valor menor o igual 0 para encontrar la segunda raiz");
printf("\nX inicial: ");
scanf("%f",&xInicial);
newtonraphson(xInicial,error);
printf("\nEL valor de la segunda raiz es aproximadamente:%f",raiz);


getch();
return 0;
}
