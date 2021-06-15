#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int num, result, i;
    i=1;
	
	system("color B");
	
	do { 
		printf("Digite um número: ");
		scanf("%d", &num);
		system("cls");
	} while (num < 0);
	result = num; 
	while (i < num) {
		result *= i;
		i ++;
	}
	
	printf("%d = %d", num, result); 
	
	return 0;
}
