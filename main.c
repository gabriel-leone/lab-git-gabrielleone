#include <stdio.h>
#include <math.h>

void somatoria(int x, int y) {
    int i;
    long int soma = 0;
    for (i = x; i <= y; i = i + 1) {
        soma = soma + i;
    }
    printf("\nA somatória é %ld\n", soma);
}

long int somatoriaRecursiva(int x, int y) {
    if (x <= y) {
        long int soma = x;
        long int resultado = somatoriaRecursiva(x + 1, y);
        printf("Resultado: %ld\n", resultado);
        return soma + resultado;
    }
    return 0;
}

long int produtoRecursivo(int x, int y) {
    if (x <= y) {
        long int produto = x;
        long int resultado = produtoRecursivo(x + 1, y);
        printf("Resultado: %ld\n", resultado);
        return produto * resultado;
    }
    return 1;
}

int main(void) {
    printf("\n\n ::::::::   INICIO DO PROGRAMA  :::::::: \n\n");
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);

    printf("\nA somatória é %ld\n", somatoriaRecursiva(x, y));
    printf("\nO produto é %ld\n", produtoRecursivo(x, y));
    printf("\n\n ::::::::   FIM DO PROGRAMA  :::::::: \n\n");
    return 0;
}