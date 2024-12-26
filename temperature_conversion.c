/*
    Este programa permite converter um valor numérico de uma unidade de medida para outra,
    de acordo com a escolha do usuário.
*/


#include <stdio.h>
#include <stdlib.h>


/*
    @brief: Função que realiza a conversão do valor numérico de uma unidade para outra.
    @note: Suporta conversão entre Celsius, Kelvin e Fahrenheit
*/

void temperature_conversion()
{
    double value;
    char unit;

    // Entrada de dados do usuário
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &value);

    printf("\n\nSelecione a unidade do valor de entrada:\nC. Celsius\nK. Kelvin\nF. Fahrenheit\nOpcao:");
    fflush(stdin);
    scanf("%c", &unit);


    //Conversão e exibição dos resultados
    printf("\n\nCONVERSOES DO VALOR\n");


    switch (unit)
    {
    case 'C':
        printf("\nDe Celsius para Kelvin: %.2lf", value + 273.15);            //Conversão para Kelvin
        printf("\nDe Celsius para Fahrenheit: %.2lf",(value * 9/5) + 32);     //Conversão para Fahrenheit
        break;
    case 'K':
        printf("\nDe Kelvin para Fahrenheit: %.2lf",(value * 1.8)  - 459.67); //Conversão para Fahrenheit
        printf("\nDe Kelvin para Celsius: %.2lf",value - 273.15);             // COnversão para Celsius
        break;
    case 'F':
        printf("\nDe Fahrenheit para Kelvin: %.2lf", (value + 459.67) / 1.8); // Conversão para Kelvin
        printf("\nDe Fahrenheit para Celsius: %.2lf",(value - 32) * 5/9);     // Conversão para Celsius
        break;
    default:
        printf("\nOpcao selecionada invalida\n.");
        return 0;
    }

    return ;
}

