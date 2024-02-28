//Faça um algoritimo que solicite do usuário
//um número inteiro quarquer e mostrar no terminal
//se o número imformado é par ou impar.

#include <stdio.h>

int main (){
	int numero;
	
	printf("Digite um numero: ");
	scanf("%i",&numero);
	
	if(numero%2==0)
		printf("numero par");
	else
		printf("numero impar");
		
	return 0;
}
