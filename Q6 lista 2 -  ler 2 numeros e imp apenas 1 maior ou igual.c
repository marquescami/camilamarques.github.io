#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b;
	
	printf ("Informe dois numeros inteiro: \n");
	scanf ("%d %d",&a,&b);
	
	if (a>b)
	{
	printf ("O numero maior eh: \n %d",a);
	}
	
	else if (b>a)
	{
	printf ("O numero maior eh: \n %d", b);
	}	
	
	else if  (b=a)
	
	{
	printf (" O numero maior eh: \n %d", b);
	}	
	
	return 0;
}
