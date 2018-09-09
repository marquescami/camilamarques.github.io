#include <stdio.h>
#include <stdlib.h>

int subtracao (int a, int b, int c){
	int resultado;
	
	resultado = a - b - c;
	return resultado;
		
}

int main(int argc, char *argv[]) {
	
	int n1, n2, n3;
	int resultado;
	
	printf ("Informe tres numeros: \n");
	scanf ("%d %d %d", &n1, &n2, &n3);
	
	resultado = subtracao (n1, n2, n3);
	printf ("O resultado eh: %d", resultado);
	
	
	return 0;
}
