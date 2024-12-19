#include <stdio.h>
#include "speed_conversion.h"

/* Funções usadas para conversão de unidades de velocidade */
double Velocidade(double valor, int unidade) {
    switch (unidade) {
        case 1: return valor;                      // km/h
        case 2: return valor * 3.6;               // m/s para km/h
        case 3: return valor * 1.60934;           // mph para km/h
        default: return -1;                       // Unidade inválida
    }
}

// Função principal para conversão de velocidades
void converteVelocidade() {
    double valor;
    int unidade;

    // Solicita o valor e a unidade ao usuário
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Selecione a unidade do valor de entrada:\n"
        "1. km/h\n"
        "2. m/s\n"
        "3. mph\n"
        "Opção: ");
    scanf("%d", &unidade);

    // Converte o valor para km/h
    double kmh = Velocidade(valor, unidade);

    // Verifica se o número digitado é inválido
    if (kmh < 0) {
        printf("A unidade inválida.\n");
        return;
    }

    // Realiza as conversões para outras unidades
    double ms = kmh / 3.6;
    double mph = kmh / 1.60934;

    // Mostra os resultados das conversões
    printf("\nConversões do valor:\n");
    printf("km/h: %.2f\n", kmh);
    printf("m/s: %.2f\n", ms);
    printf("mph: %.2f\n", mph);
}