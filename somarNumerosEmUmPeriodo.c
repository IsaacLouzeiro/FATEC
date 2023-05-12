#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int soma = 0, numInicialFor = 0, numInicialWhile = 0, numInicialDoWhile = 0, numFinal = 0;

  printf("Somar n�meros entre um per�odo\n");
  printf("Informa o n�mero inicial: ");
  scanf("%d", &numInicialFor);
  numInicialWhile = numInicialFor;
  numInicialDoWhile = numInicialFor;

  printf("Informa o n�mero final: ");
  scanf("%d", &numFinal);

  for(numInicialFor = numInicialFor; numInicialFor <= numFinal; numInicialFor++) {
    soma = soma + numInicialFor;
  }

  printf("\nA soma dos n�meros com For: %d", soma);

  soma = 0;

  while(numInicialWhile <= numFinal) {
    soma = soma + numInicialWhile;
    numInicialWhile++;
  }

  printf("\nA soma dos n�meros com While: %d", soma);

  soma = 0;

  do {
    soma = soma + numInicialDoWhile;
    numInicialDoWhile++;
  } while(numInicialDoWhile <= numFinal);

  printf("\nA soma dos n�meros com Do While: %d", soma);


  return 0;
}
