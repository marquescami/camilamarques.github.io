#include <stdio.h>
#include <stdlib.h>

float n1,n2,n3,n4, media;
int main(int argc, char *argv[]) {
	
	printf ("Informe as 4 notas: \n");
	scanf ("%f %f %f %f",&n1,&n2,&n3,&n4);

	media=((n1*2)+(n2*2)+(n3*3)+(n4*3))/10;
	printf("Sua media e:%f\n",media);
	
		
		if (media>=9 && media<=10)
	{
		printf("Conceito:A\n");
		printf("APROVADO\n");
		
				}
				
		else if (media >=7.5 && media <9.0)
	{
		printf("Conceito: B\n");
		printf("APROVADO\n");
				}
								
		else if (media <=6.0 && media<7.5)
	{
		printf("Conceito: C\n");
		printf("REPROVADO\n");
				}			
				
		else if (media <=4.0 && media<6.0)
	{
		printf("Conceito: D\n");
		printf("FINAL\n");
				}
				
		else if (media <4.0 )
	{
		printf("Conceito: E\n");
		printf("REPROVADO\n");
				}
				
					
	return 0;
}
