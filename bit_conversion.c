#include <stdio.h>
#include "bit_conversion.h"

/* Funções usadas para conversão de unidades */
double Bits(double valor, int unidade) {
    switch (unidade) {
        case 1: return valor;                                  // Bits
        case 2: return valor * 8;                              // Bytes para Bits
        case 3: return valor * 8 * 1024;                       // KB para Bits
        case 4: return valor * 8 * 1024 * 1024;                // MB para Bits
        case 5: return valor * 8 * 1024 * 1024 * 1024;         // GB para Bits
        case 6: return valor * 8 * 1024 * 1024 * 1024 * 1024;  // TB para Bits
        default: return -1;                                    // Unidade inválida
    }
}

// Função principal que recebe o valor e a unidade para a conversão
void converteBits() {
    double valor;
    int unidade;

    // Solicita o valor e a unidade ao usuário
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Selecione a unidade do valor de entrada:\n"
        "1. Bits\n"
        "2. Bytes\n"
        "3. Kilobytes\n"
        "4. Megabytes\n"
        "5. Gigabytes\n"
        "6. Terabytes\n"
        "Opção: ");
    scanf("%d", &unidade);

    // Converte o valor para bits
    double bits = Bits(valor, unidade);

    // Verifica se o número digitado é inválido
    if (bits < 0) {
        printf("A unidade inválida.\n");
        return;
    }

    // Realiza as conversões para outras unidades
    double bytes = bits / 8;
    double kilobytes = bytes / 1024;
    double megabytes = kilobytes / 1024;
    double gigabytes = megabytes / 1024;
    double terabytes = gigabytes / 1024;

    //Mostra os resultados das conversões
    printf("\nConversoes do valor:\n");
    printf("Bits: %.2f\n", bits);
    printf("Bytes: %.2f\n", bytes);
    printf("Kilobytes: %.2f\n", kilobytes);
    printf("Megabytes: %.2f\n", megabytes);
    printf("Gigabytes: %.2f\n", gigabytes);
    printf("Terabytes: %.2f\n", terabytes);
}
