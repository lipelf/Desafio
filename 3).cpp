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

