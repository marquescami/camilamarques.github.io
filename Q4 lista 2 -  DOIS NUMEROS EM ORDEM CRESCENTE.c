#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b;
	
	printf ("Informe dois numeros inteiro: \n");
	scanf ("%d %d",&a,&b);
	
	if (a>b)
	{
	printf ("%d, %d", a,b);
	}
	
	else if (b>a)
	{
	printf ("%d, %d", b,a);
	}	
	
	else if  (b=a)
	
	{
	printf ("%d, %d", b,a);
	}	
	
	return 0;
}
