#include <stdio.h>

int main(){
	
	int indice = 13, soma = 0, k = 0;
	
	printf("somando:");
	
	while (k < indice)
	{
		k = k + 1; 
		soma = soma + k; 
	}
	
	printf("resultado de soma e: %d\n", soma);
}
