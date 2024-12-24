#include <stdbool.h>
#include <stdio.h>
#define KILOGRAM 1
#define GRAM 2
#define TONS 3

double conversions(double value, int input_unit, int output_unit);

void mass_conversion() {
  // initializa as variaveis a serem utilizadas
  double value = 0;
  int input_unit = 0;

  // Recebe a entrada do valor a ser convertido
  printf("Digite o valor a ser convertido: ");
  scanf("%lf", &value);

  printf("Digite a unidade do valor de entrada:\n");

  while (true) {
    printf(
        "1 - Quilograma\n"
        "2 - Grama\n"
        "3 - Tonelada\n"
        "Opcao: ");
    scanf("%i", &input_unit);

    if (input_unit < 1 || input_unit > 3) {
      printf("Unidade invalida! Por favor, insira valores entre 1 e 3: \n");
    } else {
      break;
    }
  }

  for (int output_unit = KILOGRAM; output_unit <= TONS; output_unit++) {
    double result = conversions(value, input_unit, output_unit);

    if (output_unit == KILOGRAM) {
      printf("Resultado: %.2lf kg\n", result);
    } else if (output_unit == GRAM) {
      printf("Resultado: %.2lf g\n", result);
    } else {
      printf("Resultado: %.2lf t\n", result);
    }
  }
}

double conversions(double value, int input_unit, int output_unit) {
  if (input_unit == KILOGRAM) {
    // de quilograma para grama
    if (output_unit == GRAM)
      return value * 1000;
    else if (output_unit == TONS) {
      // de quilograma para tonelada
      return value / 1000;
    }
  } else if (input_unit == GRAM) {
    if (output_unit == KILOGRAM) {
      // de grama para quilograma
      return value / 1000;
    } else if (output_unit == TONS) {
      // de grama para tonelada
      return value / 1000000;
    }
  } else {
    if (output_unit == GRAM) {
      // de tonelada para grama
      return value * 1000000;
    } else if (output_unit == KILOGRAM) {
      // de tonelada para quilograma
      return value * 1000;
    }
  }

  // se chegar aqui entao input_unit == output_unit
  return value;
}
