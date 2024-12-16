// referências: https://www.mundodaeletrica.com.br/aprenda-como-converter-cv-para-kw/
// https://www.convertworld.com/pt/potencia/cavalo-vapor/cv-para-watt.html


#include <stdio.h>
#include "watts_conversion.h"

// Funcao para conversao de unidades
double Watts(double valor, int unidade) {
    switch (unidade) {
        case 1: return valor;                    // Valor em Watts
        case 2: return valor * 1000;             // kiloWatts para Watts
        case 3: return valor * 735.49875;        // cavalos-vapor para Watts
        default: return -1;                      // Unidade inválida
    }
}


// Funcao principal
void converteWatts() {
    double valor;
    int unidade;

    // Solicita o valor e a unidade ao usuário
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Selecione a unidade do valor de entrada:\n"
    "1. Watts (W)\n"
    "2. Quilowatts (kW)\n"
    "3. Cavalos-vapor (cv/hp)\n"
    "Opcao: ");
    scanf("%d", &unidade);

    // Converte o valor para Watts
    double watts = Watts(valor, unidade);

    // Verifica se o número digitado é inválido
    if (watts < 0) {
        printf("Unidade inválida.\n");
        return;
    }

    // Calcula as outras conversões
    double kilowatts = watts / 1000;          // Watts para Quilowatts
    double cavalos_vapor = watts / 735.49875; // Watts para Cavalos-vapor

    // Exibe os resultados das conversoes
    printf("\nConversoes:\n");
    printf("Watts (W): %.2f\n", watts);
    printf("Quilowatts (kW): %.2f\n", kilowatts);
    printf("Cavalos-vapor (cv/hp): %.2f\n", cavalos_vapor);
}
