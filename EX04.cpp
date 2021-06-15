#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, mortes, nascidas, meses, mes_24, meninos;
	float porcentagemMortos, porcentagemMasculinos, porcentagem24meses;
	char sexo;
	mes_24=0;
	meninos=0;
	porcentagemMortos=0;
	porcentagemMasculinos=0;
	porcentagem24meses=0;
	
	system("color B");
	
	printf("Digite a quantidade de crian�as nascidas no per�odo pesquisado:");
	scanf("%d", &nascidas);
	fflush(stdin);
	
	printf("Digite a quantidade de crian�as que morreram: ");
	scanf("%d", &mortes);
	fflush(stdin);
	
	for(i=1; i<=mortes; i++){
		do{
		printf("Digite o sexo da crian�a %d que morreu\nMASCULINO(M), FEMININO(F): ", i);
		scanf("%c", &sexo);
		fflush(stdin);
		}while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M' && sexo != 'v' && sexo != 'V');
		sexo = toupper(sexo);
		printf("Digite quantos meses tinha a crian�a %d: ", i);
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
	
	printf("A porcentagem de crian�as mortas no per�odo calculado � de %.2f%%.\n", porcentagemMortos);
	printf("A porcentagem de crian�as masculinas mortas � de %.2f%%.\n", porcentagemMasculinos);
	printf("A porcentagem de crian�as que morreram com idade prematura � de %.2f%%.\n", porcentagem24meses);
	
    return 0;	
}
