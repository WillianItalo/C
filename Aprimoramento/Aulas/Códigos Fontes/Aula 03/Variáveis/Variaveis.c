#include <stdio.h>

#define texto "Entrada e Saida de dados."

int main(){
	printf("%s\n", texto);
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: \n");
	scanf("%f",  &altura);
	
	printf("Digite o seu nome: \n");
	scanf("%s", nome);
	
	printf("Dados informados: \n");
	printf("Nome: %s.\n", nome);
	printf( "Idade: %d.\n", idade);
	printf( "Altura: %.2f.\n", altura);
	
}
