#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int idade;

printf ("Informe a idade:\n");
scanf("%d", &idade);

if (idade >=18){
	printf ("Maior de idade \n");
}

else
	printf ("Menor de idade\n");
		
	
	return 0;
}
