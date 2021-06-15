#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int valor=0, faturamento=0;

 	system("color B");
 	
   	printf("Os valores dos ingressos são: \n");
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
	else printf("\nVALOR INVÁLIDO");
	        printf("\n\n");	
		
	return 0;
}
