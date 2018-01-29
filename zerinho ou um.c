#include <stdio.h>
#include <stdlib.h>

int alice, beto, clara;

int main() {              
    
    
			printf ("Informe o o valor de Alice: \n");
        	scanf ("%d", &alice);
        	printf ("Informe o o valor de Beto: \n");
        	scanf ("%d", &beto);
        	printf ("Informe o o valor de Clara: \n");
        	scanf ("%d", &clara);
   
		
        while ((alice!=0 && alice!=1) || (beto!=0 && beto!=1) || (clara!=0 && clara!=1)){
	         printf ("Jogo invalido - faca uma nova jogada\n");
	    	return 0;
		}	
	    	 
			  	      	
        if ((alice == beto) && (alice == clara)) 
		{
                printf ("Deu empate\n");
               
        }
        
                if ((alice != beto) && (alice != clara))
        {
                printf ("Alice ganhou\n");
                
                
        }
        
                if ((beto != alice) && (beto != clara))
        {
                printf ("Beto ganhou\n");
                               
        }


                if ((clara != beto) && (clara != alice))
        {
                printf ("Clara ganhou\n");
                
                
        }        
        
    }
 

