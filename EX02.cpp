#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num, result, i;
    i=1;
	
	system("color B");
	
	do { 
		printf("Digite um n�mero: ");
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
