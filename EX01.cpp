#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int num;
	
	system("color B");
	
	printf("Digite um n�mero: ");
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
		printf("%d � ultrapassado do limite", num); 
	}
	return 0;
}
