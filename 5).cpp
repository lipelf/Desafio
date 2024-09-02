
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

#include <stdio.h>

int fibonacci(int n) {
  int x;
  
  if (n == 1) {
    return(1);
  }
  
  if (n == 2) {
    return(1);
  }
  
  x = fibonacci(n-1) + fibonacci(n-2);
  return(x);
}

int main() {
  int n,i;
  
  printf("Digite o numero de termos da sequencia: ");
  scanf("%d", &n);
  
  while(n <= 0) {
    printf("Numero incorreto. Digite o numero de termos da sequencia: ");
    scanf("%d", &n);
  }
  
  for (i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return(0);
}

#include <stdio.h>

#define DIAS_DO_MES 30

int main() {
    float faturamento[DIAS_DO_MES] = {200.5, 0, 150.0, 300.0, 0, 0, 50.0, 700.0, 400.0, 100.0, 
    0, 250.0, 0, 350.0, 450.0, 500.0, 0, 600.0, 0, 0, 100.0, 200.0, 0, 300.0, 150.0, 0, 0, 50.0, 
	250.0, 400.0};

    float menorFaturamento = faturamento[0];
    float maiorFaturamento = faturamento[0];
    float somaFaturamento = 0.0;
    int diasComFaturamento = 0;
    int diasAcimaDaMedia = 0;

    for (int i = 0; i < DIAS_DO_MES; i++) {
        if (faturamento[i] > 0) {  // Ignora dias sem faturamento
            if (faturamento[i] < menorFaturamento) {
                menorFaturamento = faturamento[i];
            }
            if (faturamento[i] > maiorFaturamento) {
                maiorFaturamento = faturamento[i];
            }
            somaFaturamento += faturamento[i];
            diasComFaturamento++;
        }
    }

    float mediaFaturamento = somaFaturamento / diasComFaturamento;

    for (int i = 0; i < DIAS_DO_MES; i++) {
        if (faturamento[i] > mediaFaturamento) {
            diasAcimaDaMedia++;
        }
    }

    printf("Menor faturamento: %.2f\n", menorFaturamento);
    printf("Maior faturamento: %.2f\n", maiorFaturamento);
    printf("Dias com faturamento acima da media: %d\n", diasAcimaDaMedia);

    return 0;
}

#include <stdio.h>

int main() {
	
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    float total = rj + sp + es + mg + outros;

    float percentualSP = (sp / total) * 100;
    float percentualRJ = (rj / total) * 100;
    float percentualMG = (mg / total) * 100;
    float percentualES = (es / total) * 100;
    float percentualOutros = (outros / total) * 100;

    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", percentualSP);
    printf("RJ: %.2f%%\n", percentualRJ);
    printf("MG: %.2f%%\n", percentualMG);
    printf("ES: %.2f%%\n", percentualES);
    printf("Outros: %.2f%%\n", percentualOutros);
	
    return 0;
}

#include <stdio.h>

#include <string.h>

void inverterString(char str[]) {

    int tamanho = strlen(str);

    int inicio = 0;

    int fim = tamanho - 1;

    while (inicio < fim) {

        char temp = str[inicio];

        str[inicio] = str[fim];

        str[fim] = temp;

        inicio++;

        fim--;

    }

}

int main() {

    char minhaString[] = "Teste";

    printf("String original: %s\n", minhaString);

    inverterString(minhaString);

    printf("String invertida: %s\n", minhaString);

    return 0;

}

