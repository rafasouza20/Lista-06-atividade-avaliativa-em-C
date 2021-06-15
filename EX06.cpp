#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num;
    
    system("color B");
	
	printf("Digite um número: ");
		while(scanf("%d",&num)!=1){
			printf("Valor inválido, digite um valor inteiro: ");
			fflush(stdin);
			while(getchar()!='\n');
}
			printf("%d tem um tamanho de: % algarismos",num,sizeof(num));
	
	return 0;
}
