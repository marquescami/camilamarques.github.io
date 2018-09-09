#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b){
	int resultado;
	
	resultado = a+b;
	return resultado;
		
}

int main(int argc, char *argv[]) {
	
	int n1, n2;
	int resultado;
	
	printf ("Informe dois numeros: \n");
	scanf ("%d %d", &n1, &n2);
	
	resultado = soma (n1, n2);
	printf ("O resultado eh: %d", resultado);
	
	
	return 0;
}
