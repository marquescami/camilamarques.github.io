#include <stdlib.h>
#include <stdio.h>

void lerNumeros (int vet[3]){
	
	int i;
 	
	
	   for (i = 0; i < 3; i++) {
	      printf ("Digite um valor para a posicao %d do vetor: ", i + 1);
	      scanf ("%d", &vet[i]); //isso � equivalente a fazer *(x + i)
	   }
	   
	
	   
}

void imprimirNumeros (int vet[3]){
	
	int i;
	for (i = 0; i < 3; i++) 
      printf ("%d\n", vet[i]);	
	
}

int main ()
{
	int i;
	int vetor[3];
       
	lerNumeros (vetor);
	printf ("main\n");
      
	imprimirNumeros (vetor);   
	printf ("main\n");


   return (0);
}
