#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int i, mortes, nascidas, meses, mes_24, meninos;
	float porcentagemMortos, porcentagemMasculinos, porcentagem24meses;
	char sexo;
	mes_24=0;
	meninos=0;
	porcentagemMortos=0;
	porcentagemMasculinos=0;
	porcentagem24meses=0;
	
	system("color B");
	
	printf("Digite a quantidade de crianças nascidas no período pesquisado:");
	scanf("%d", &nascidas);
	fflush(stdin);
	
	printf("Digite a quantidade de crianças que morreram: ");
	scanf("%d", &mortes);
	fflush(stdin);
	
	for(i=1; i<=mortes; i++){
		do{
		printf("Digite o sexo da criança %d que morreu\nMASCULINO(M), FEMININO(F): ", i);
		scanf("%c", &sexo);
		fflush(stdin);
		}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M' && sexo != 'v' && sexo != 'V');
		sexo = toupper(sexo);
		printf("Digite quantos meses tinha a criança %d: ", i);
		scanf("%d", &meses);
		fflush(stdin);
		
		system("cls");
		
		if(sexo=='M')
		meninos++;
		else if(meses>=1 && meses<=24)
		mes_24++;
	}
	porcentagemMortos = (mortes * 100) / nascidas;
	porcentagemMasculinos = (meninos * 100) / nascidas;
	porcentagem24meses = (mes_24 * 100) / nascidas;
	
	system("cls");
	
	printf("A porcentagem de crianças mortas no período calculado é de %.2f%%.\n", porcentagemMortos);
	printf("A porcentagem de crianças masculinas mortas é de %.2f%%.\n", porcentagemMasculinos);
	printf("A porcentagem de crianças que morreram com idade prematura é de %.2f%%.\n", porcentagem24meses);
	
    return 0;	
}
