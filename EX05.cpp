#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int valor=0, faturamento=0;

 	system("color B");
 	
   	printf("Os valores dos ingressos s�o: \n");
 	printf("R$ 15,00\n");
	printf("R$ 13,00\n\n");
	printf("\nDigite o valor do ingresso: ");
	fflush(stdin);
	scanf("%d",&valor);	 
    if(valor=15){
	    faturamento = 15*120;					     
	    printf("\n\nValores de despesas: R$ 600,00");
	    printf("\nValor do quanto faturou: R$ %d",faturamento);
	    printf("\nLucro esperado: R$ 1.200,00");
}
    else if(valor=13){
	    faturamento = 13*146;
	       	printf("\n\nValores de despesas: R$ 600,00");
	  		printf("\nValor do quanto faturou: R$ %d",faturamento);
	        printf("\nLucro esperado: R$ 1.298,00");
}
	else printf("\nVALOR INV�LIDO");
	        printf("\n\n");	
		
	return 0;
}
