#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int vet1[5],vet2[5],vetsoma[5], x;

int main(int argc, char *argv[]) {
	
for (x=0; x<5;x++)	
	{
	printf ("Preencha o vetor 1 \n");
	scanf ("%d", &vet1 [x]);
		
	printf ("Preencha o vetor 2 \n");
	scanf ("%d", &vet2 [x]);
			
	vetsoma[x]= vet1[x]+vet2[x];
	
	}
	
	for (x=0; x<5; x++)
	
	{
	printf ("%d|", vetsoma[x]);
	}
	
	return 0;
}
