#include<stdio.h> // Biblioteca que cont�m fun��es para entrada e sa�da
#include<locale.h> // Biblioteca para definir o idioma do programa para Portugu�s
#include<string.h> // Biblioteca para manipular v�rias fun��es de strings
#include<stdlib.h> // Biblioteca que cont�m fun��es e constantes b�sicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // in�cio do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para portugu�s
    
    int i, altura, maiorAltura, menorAltura, altura_Mulheres, homens, mulheres, quantPessoas;
	float mediaAltura_mulher;
	char sexo;	
	maiorAltura=0;
	menorAltura=0;
	altura_Mulheres=0;
	homens=0;
	mulheres=0;
	mediaAltura_mulher=0;
	
	system("color B");
	
	do{
		printf("Quantas pessoas v�o fazer a pesquisa: ");
		scanf("%d", &quantPessoas);
		fflush(stdin);
		if(quantPessoas<1 || quantPessoas>10)
		printf("Valor inv�lido, por favor digite um valor v�lido!\n");		
	}while(quantPessoas<1 || quantPessoas>10);
		
	for(i=1; i<=quantPessoas; i++){	
		printf("Digite o sexo MASCULINO(M), FEMININO(F): ");
		scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		
		printf("Digite a altura da %d� pessoa, em cent�metros: ", i);
		scanf("%d", &altura);
		fflush(stdin);
		
		if(i==1)
		maiorAltura = altura;
		if(maiorAltura < altura)
		maiorAltura = altura;
		if(i==1)
		menorAltura = altura;
		if(menorAltura > altura)
		menorAltura = altura;
		if(sexo=='F'){
		mulheres++;
		altura_Mulheres = altura_Mulheres + altura;
		}
		if(sexo=='M')
		homens++;	
	}
	
	system("cls");	
	mediaAltura_mulher = altura_Mulheres/mulheres;
	
	printf("A maior altura da pesquisa foi %d cent�metros.\n", maiorAltura);
	printf("A menor altura da pesquisa foi %d cent�metros.\n", menorAltura);
	printf("A m�dia de altura das mulheres � de %.1f.\n", mediaAltura_mulher);
	printf("A quantidade de homens que fizeram a pesquisa � %d.\n", homens);
		
	system("pause");
    return 0;
}
