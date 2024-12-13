#include <stdio.h>

void converterVolume(double valor, int unidadeOrigem, int unidadeDestino) {
    double convertido;

    // Conversão para a unidade base (litros)
    if (unidadeOrigem == 1) { // Litros
        convertido = valor;
    } else if (unidadeOrigem == 2) { // Mililitros
        convertido = valor / 1000.0;
    } else if (unidadeOrigem == 3) { // Metros cubicos
        convertido = valor * 1000.0;
    } else {
        printf("Unidade de origem invalida!\n");
        return;
    }

    // Conversão da unidade base para a unidade de destino
    if (unidadeDestino == 1) { // Litros
        convertido = convertido;
    } else if (unidadeDestino == 2) { // Mililitros
        convertido = convertido * 1000.0;
    } else if (unidadeDestino == 3) { // Metros cubicos
        convertido = convertido / 1000.0;
    } else {
        printf("Unidade de destino invalida!\n");
        return;
    }

    printf("O valor convertido é: %.3f\n", convertido);
}

int main() {
    double valor;
    int unidadeOrigem, unidadeDestino;

    printf("Conversor de Unidades de Volume\n");
    printf("Escolha a unidade de origem:\n");
    printf("1 - Litros\n2 - Mililitros\n3 - Metros cubicos\n");
    printf("Digite a opcao: ");
    scanf("%d", &unidadeOrigem);

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Escolha a unidade de destino:\n");
    printf("1 - Litros\n2 - Mililitros\n3 - Metros cubicos\n");
    printf("Digite a opcao: ");
    scanf("%d", &unidadeDestino);

    converterVolume(valor, unidadeOrigem, unidadeDestino);

    return 0;
}
