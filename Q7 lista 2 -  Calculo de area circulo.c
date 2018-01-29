#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float pi=3.14, a1, a2, r1, r2;

printf ("Informe o raio do primeiro circulo: \n");
scanf ("%f", &r1);


printf ("Informe o raio do segundo circulo: \n");
scanf ("%f", &r2);

a1=((r1*r1)*pi);
a2=((r2*r2)*pi);

if (a1>a2)
{
printf ("A area maior eh a do primeiro circulo  %.2f\n", a1 );	
	
}
	
else if (a2>a1)
{
printf ("A area maior eh a do segundo circulo  %.2f \n", a2);	
	
}	

else if (a1=a2)
{
printf ("As areas dos circulos sao iguais:\n %.2f \n", a1);	
	
}	
	return 0;
}
