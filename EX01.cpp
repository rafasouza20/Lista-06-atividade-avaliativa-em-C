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
	scanf("%i", &num); 
	system("cls");
	if (num < 2000) {
		do { 
			if (num % 2 == 0) {
				printf("%d\n", num);
			}
			num ++;
		} while (num <= 2000);
	} else {
		printf("%d é ultrapassado do limite", num); 
	}
	return 0;
}
