#include<stdio.h> // Biblioteca que contém funções para entrada e saída
#include<locale.h> // Biblioteca para definir o idioma do programa para Português
#include<string.h> // Biblioteca para manipular várias funções de strings
#include<stdlib.h> // Biblioteca que contém funções e constantes básicas
#include <ctype.h> // Biblioteca para classificar caracteres

int main(){ // início do programa
    setlocale(LC_ALL,"portuguese"); // definir idioma para português
    
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
		printf("Quantas pessoas vão fazer a pesquisa: ");
		scanf("%d", &quantPessoas);
		fflush(stdin);
		if(quantPessoas<1 || quantPessoas>10)
		printf("Valor inválido, por favor digite um valor válido!\n");		
	}while(quantPessoas<1 || quantPessoas>10);
		
	for(i=1; i<=quantPessoas; i++){	
		printf("Digite o sexo MASCULINO(M), FEMININO(F): ");
		scanf("%c", &sexo);
		fflush(stdin);
		sexo = toupper(sexo);
		
		printf("Digite a altura da %dª pessoa, em centímetros: ", i);
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
	
	printf("A maior altura da pesquisa foi %d centímetros.\n", maiorAltura);
	printf("A menor altura da pesquisa foi %d centímetros.\n", menorAltura);
	printf("A média de altura das mulheres é de %.1f.\n", mediaAltura_mulher);
	printf("A quantidade de homens que fizeram a pesquisa é %d.\n", homens);
		
	system("pause");
    return 0;
}
