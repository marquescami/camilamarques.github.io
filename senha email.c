#include <stdio.h>
#include <stdlib.h>

int main()
{  
    char email[]= "camilamsc@hotmail.com";
    char password[]= "amor";
    char senhadigitada[30];
    int cont=0;
                  
                 
                   
    while (!strncmp(password,senhadigitada)==0)
    {
        
    printf("Email: %s\n",email);
    printf("Senha: ");
    gets(senhadigitada);
    if (!strcmp(password,senhadigitada)==0)
        {
        printf("Senha incorreta\n");                
            cont++;                        
    }
                        
    }
                  
    
    
    printf("Senha correta,voc\210 errou a senha %d vezes",cont++);
                   
    return 0;
}
