#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	
	int num1, num2;
    	num1 = 0;
	    num2 = 0;
	    char final;
	    int soma;
	    
	
	     printf("\tCalculadora de 2 Numeros\n\n");
	     
	     system("pause");
	     
	     do{
	     	
	     	system("cls");
	     	
	     printf("\nNumero 1: ");
	     scanf("%i",&num1);
	    
	     printf("\nNumero 2: ");
	     scanf("%i",&num2);
	    
	     soma = (num1 + num2);
	    
	    printf("\nSoma: %i\n\n", soma);
	    
	    system("pause");
	    
	     printf("\nDeseja Continuar (S) Ou (N) %c\n", final);
	    		    scanf("%c",final);

}while(final ='s' ||'S');

	    		   

	    	
	    /*	if(final){
	    	printf("\n...");
	    	exit(1);
	    	}
	    */	
	    return 0;
}
    
