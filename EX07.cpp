#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres


int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int pele, maradona, brancos, nulos, numero, votos, i;
    pele=0;
    maradona=0;
    
    system("color B");
	
	printf("Quantos votos ser�o feitos: ");
		while(scanf("%d",&votos)!=1){
			fflush(stdin);
			printf("Valor inv�lido, tente novamente: ");
			while(getchar()!='\n');
		}
		do{
			fflush(stdin);
			printf("\n");
		printf("25-Pel�\n");
		printf("33-Maradona\n");
		printf("Escolha seu jogador: ");
			while(scanf("%d",&numero)!=1){
				fflush(stdin);
				printf("Digite 25 ou 33 de acordo com o n�mero dos candidatos jogadores: ");
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
	printf("Quantidade de votos para os jogadores:\nPel�: %d\nMaradona: %d\n",pele,maradona);
	printf("Votos em branco: %d\nVotos em Nulo: %d\n",brancos,nulos);
	if(pele>maradona){
		printf("Candidato vencedor: Pel�");
	}else if(maradona>pele){
		printf("Candidato vencedor: Maradona\n");
	}else if(pele==maradona){
		printf("Empate t�cnico ambos os jogadores tiveram a mesma quantidade de votos\n");
	}
	
	return 0;
}
