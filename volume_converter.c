#include "volume_converter.h"
#include <stdio.h>

void exibirMenu() {
    printf("\n=== Conversor de Volume ===\n");
    printf("1. Iniciar\n");
    printf("2. Sair\n");
}

static double converterParaLitros(double valor, int unidadeOrigem) {
    switch (unidadeOrigem) {
        case 1: // Litros
            return valor;
        case 2: // Mililitros
            return valor / 1000.0;
        case 3: // Metros cúbicos
            return valor * 1000.0;
        default:
            printf("Unidade de origem inválida!\n");
            return -1;
    }
}

static double converterDeLitros(double valor, int unidadeDestino) {
    switch (unidadeDestino) {
        case 1: // Litros
            return valor;
        case 2: // Mililitros
            return valor * 1000.0;
        case 3: // Metros cúbicos
            return valor / 1000.0;
        default:
            printf("Unidade de destino inválida!\n");
            return -1;
    }
}

void converterVolume(double valor, int unidadeOrigem, int unidadeDestino) {
    double valorEmLitros = converterParaLitros(valor, unidadeOrigem);
    if (valorEmLitros < 0) return;

    double convertido = converterDeLitros(valorEmLitros, unidadeDestino);
    if (convertido < 0) return;

    printf("O valor convertido é: %.3f\n", convertido);
}

void realizarConversao() {
    double valor;
    int unidadeOrigem, unidadeDestino;

    printf("Digite o valor a ser convertido: ");
    if (scanf("%lf", &valor) != 1 || valor < 0) {
        printf("Valor inválido!\n");
        return;
    }

    printf("Selecione a unidade de origem:\n"
           "1. Litros\n"
           "2. Mililitros\n"
           "3. Metros cúbicos\n"
           "Opção: ");
    if (scanf("%d", &unidadeOrigem) != 1 || unidadeOrigem < 1 || unidadeOrigem > 3) {
        printf("Unidade de origem inválida!\n");
        return;
    }

    printf("Selecione a unidade de destino:\n"
           "1. Litros\n"
           "2. Mililitros\n"
           "3. Metros cúbicos\n"
           "Opção: ");
    if (scanf("%d", &unidadeDestino) != 1 || unidadeDestino < 1 || unidadeDestino > 3) {
        printf("Unidade de destino inválida!\n");
        return;
    }

    converterVolume(valor, unidadeOrigem, unidadeDestino);
}
