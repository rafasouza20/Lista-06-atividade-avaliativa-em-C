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
		while(scanf("%d",&num)!=1){
			printf("Valor inv�lido, digite um valor inteiro: ");
			fflush(stdin);
			while(getchar()!='\n');
}
			printf("%d tem um tamanho de: % algarismos",num,sizeof(num));
	
	return 0;
}
