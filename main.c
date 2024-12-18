#include "volume_converter.h"
#include <stdio.h>

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
