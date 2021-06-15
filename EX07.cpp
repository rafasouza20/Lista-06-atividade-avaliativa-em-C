#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
    int pele, maradona, brancos, nulos, numero, votos, i;
    pele=0;
    maradona=0;
    
    system("color B");
	
	printf("Quantos votos serão feitos: ");
		while(scanf("%d",&votos)!=1){
			fflush(stdin);
			printf("Valor inválido, tente novamente: ");
			while(getchar()!='\n');
		}
		do{
			fflush(stdin);
			printf("\n");
		printf("25-Pelé\n");
		printf("33-Maradona\n");
		printf("Escolha seu jogador: ");
			while(scanf("%d",&numero)!=1){
				fflush(stdin);
				printf("Digite 25 ou 33 de acordo com o número dos candidatos jogadores: ");
				while(getchar()!='\n');
			}
			if(numero==25){
				pele = pele +1;
			}else if(numero==33){
				maradona = maradona + 1;
			}else if(numero==0){
				brancos = brancos + 1;
			}else {
				nulos = nulos + 1;	
			}
			i = i + 1;
	}while(i<votos);
	printf("\n");
	system("cls");
	printf("Quantidade de votos para os jogadores:\nPelé: %d\nMaradona: %d\n",pele,maradona);
	printf("Votos em branco: %d\nVotos em Nulo: %d\n",brancos,nulos);
	if(pele>maradona){
		printf("Candidato vencedor: Pelé");
	}else if(maradona>pele){
		printf("Candidato vencedor: Maradona\n");
	}else if(pele==maradona){
		printf("Empate técnico ambos os jogadores tiveram a mesma quantidade de votos\n");
	}
	
	return 0;
}
