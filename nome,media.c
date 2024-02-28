#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[200];
	int idade;
	float primeiraNota, segundaNota, terceiraNota, quartaNota;
	float media;
	
	printf("Digite seu nome: ");
	scanf("%s",&nome);
	
	printf("Digite sua idade: ");
	scanf("%i",&idade);
	
	system("cls || clear");
	
	printf("Digite sua primeira nota: ");
	scanf("%f",&primeiraNota);
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&segundaNota);
	
	printf("Digite sua terceira nota: ");
	scanf("%f",&terceiraNota);
	
	printf("Digite sua quarta nota: ");
	scanf("%f",&quartaNota);
	
	media = (primeiraNota + segundaNota + terceiraNota + quartaNota) / 4;
	
	system("cls || clear");
	printf("\n=== Exibir Resultados ===\n");
	printf("\nNome:%s", nome);
	printf("\nIdade:%i ", idade);
	printf("\nPrimeira nota:%.2f", primeiraNota);
	printf("\nSegunda nota:%.2f", segundaNota);
	printf("\nTerceira nota:%.2f", terceiraNota);
	printf("\nQuarta nota:%.2f", quartaNota);
	printf("\nMedia:%.2f ", media);
	
}

