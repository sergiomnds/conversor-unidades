#include <stdio.h>

#include "bit_conversion.h"
#include "conversao_comprimento.h"
#include "mass_conversion.h"
#include "watts_conversion.h"

int main() {
  int conversao;

  printf(
      "Escolha a Conversão: \n"
      "1 - Bits\n"
      "2 - Watts\n"
      "3 - Comprimento\n"
      "4 - Massa\n"
      "Opcao: ");
  scanf("%d", &conversao);

  switch (conversao) {
    case 1:
      converteBits();  // Chama a função de conversão de bits
      break;
    case 2:
      converteWatts();  // Chama a função de conversão de watts
      break;
    case 3:
      converteComprimento();  // Chama a função de conversão de watts
      break;
    case 4:
      mass_conversion();  // Chama a função de coversão de massa
      break;
    default:
      printf("Opção inválida. Encerrando o programa.\n");
      break;
  }

  return 0;
}
