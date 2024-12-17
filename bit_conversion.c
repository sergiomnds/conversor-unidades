#include <stdio.h>
#include "bit_conversion.h"

/* Switch usado para conversão das unidades a partir do valor em bits */
double Bits(double valor, int unidade) {
    switch (unidade) {
        case 1: return valor;                                  // Bits
        case 2: return valor * 8;                              // Bits para Bytes
        case 3: return valor * 8 * 1024;                       // Bits para KB
        case 4: return valor * 8 * 1024 * 1024;                // Bits para MB
        case 5: return valor * 8 * 1024 * 1024 * 1024;         // Bits para GB
        case 6: return valor * 8 * 1024 * 1024 * 1024 * 1024;  // Bits para TB
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

    // Realiza as conversões para outras unidades por ordem de grandeza
    double bytes = bits / 8;                     //Bits para Bytes
    double kilobytes = bytes / 1024;             //Bytes para Kilobytes (KB)
    double megabytes = kilobytes / 1024;         //Kilobytes para Megabytes (MB)
    double gigabytes = megabytes / 1024;         //Megabytes para GigaBytes (GB)
    double terabytes = gigabytes / 1024;         //Gigabytes para Terabytes (TB)

    //Mostra os resultados das conversões
    printf("\nConversoes do valor:\n");
    printf("Bits: %.2f\n", Bits);
    printf("Bytes: %.2f\n", Bytes);
    printf("Kilobytes: %.2f\n", Kilobytes);
    printf("Megabytes: %.2f\n", Megabytes);
    printf("Gigabytes: %.2f\n", Gigabytes);
    printf("Terabytes: %.2f\n", Terabytes);
}
