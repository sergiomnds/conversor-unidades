// main.c
#include <stdio.h>
#include "conversao_comprimento.h"

// Funções para conversão de unidades de comprimento
double metro_para_centimetro(double metros);
double metro_para_milimetro(double metros);
double centimetro_para_metro(double centimetros);
double centimetro_para_milimetro(double centimetros);
double milimetro_para_metro(double milimetros);
double milimetro_para_centimetro(double milimetros);

double metro_para_centimetro(double metros) {
    return metros * 100.0;
}

double metro_para_milimetro(double metros) {
    return metros * 1000.0;
}

double centimetro_para_metro(double centimetros) {
    return centimetros / 100.0;
}

double centimetro_para_milimetro(double centimetros) {
    return centimetros * 10.0;
}

double milimetro_para_metro(double milimetros) {
    return milimetros / 1000.0;
}

double milimetro_para_centimetro(double milimetros) {
    return milimetros / 10.0;
}

void closeProgram(){
    
    printf("Pressione Enter para encerrar...\n");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    getchar(); // Aguarda a tecla Enter
}

void converteComprimento() {
    int opcao;
    double valor, resultado;

    printf("Conversor de Unidades de Comprimento\n");
    printf("Selecione a conversao desejada:\n");
    printf("1 - Metros para Centimetros\n");
    printf("2 - Metros para Milimetros\n");
    printf("3 - Centimetros para Metros\n");
    printf("4 - Centimetros para Milimetros\n");
    printf("5 - Milimetros para Metros\n");
    printf("6 - Milimetros para Centimetros\n");

    printf("Digite a opcao: ");
    scanf("%d", &opcao);

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1:
            resultado = metro_para_centimetro(valor);
            printf("%.2lf metros equivalem a %.2lf centimetros.\n", valor, resultado);
            
            break;
        case 2:
            resultado = metro_para_milimetro(valor);
            printf("%.2lf metros equivalem a %.2lf milimetros.\n", valor, resultado);
            
            break;
        case 3:
            resultado = centimetro_para_metro(valor);
            printf("%.2lf centimetros equivalem a %.2lf metros.\n", valor, resultado);
            
            break;
        case 4:
            resultado = centimetro_para_milimetro(valor);
            printf("%.2lf centimetros equivalem a %.2lf milimetros.\n", valor, resultado);
            
            break;
        case 5:
            resultado = milimetro_para_metro(valor);
            printf("%.2lf milimetros equivalem a %.2lf metros.\n", valor, resultado);
            
            break;
        case 6:
            resultado = milimetro_para_centimetro(valor);
            printf("%.2lf milimetros equivalem a %.2lf centimetros.\n", valor, resultado);
            
            break;
        default:
            printf("Opção invalida!\n");
            
    }
    closeProgram();
    return;
}
