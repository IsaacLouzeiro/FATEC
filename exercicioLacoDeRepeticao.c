#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Criar um menu de usuario

// 1- Inclusao
// 2- Consulta
// 3- Altera��o
// 4- Exclus�o
// 5- Sair

// Usar laco de repeti��o para mostrar enquanto
// o usu�rio n�o selecionar 5.

void exercicioLacoDeRepeticaoFor() {
  int opcao;

  for(int opcao = 0; opcao != 5;) {
    printf("===== Menu de usu�rio =====\n");
    printf("===== 1 - Inclus�o    =====\n");
    printf("===== 2 - Consulta    =====\n");
    printf("===== 3 - Altera��o   =====\n");
    printf("===== 4 - Exclus�o    =====\n");
    printf("===== 5 - Sair        =====\n");
    printf("===========================\n");
    printf("Digite uma op��o: ");
    scanf("%d", &opcao);

    system("cls");

    if(opcao <= 0 || opcao > 5) {
      printf("Digite uma op��o v�lida!\n\n");
    }

  }
  return;
}

void exercicioLacoDeRepeticaoWhile() {
  int opcao = 0;

  while(opcao != 5) {
    printf("===== Menu de usu�rio =====\n");
    printf("===== 1 - Inclus�o    =====\n");
    printf("===== 2 - Consulta    =====\n");
    printf("===== 3 - Altera��o   =====\n");
    printf("===== 4 - Exclus�o    =====\n");
    printf("===== 5 - Sair        =====\n");
    printf("===========================\n");
    printf("Digite uma op��o: ");
    scanf("%d", &opcao);

    system("cls");

    if(opcao <= 0 || opcao > 5) {
      printf("Digite uma op��o v�lida!\n\n");
    }
  }
  return;
}

void exercicioLacoDeRepeticaoDoWhile() {
  int opcao;

  do {
    printf("===== Menu de usu�rio =====\n");
    printf("===== 1 - Inclus�o    =====\n");
    printf("===== 2 - Consulta    =====\n");
    printf("===== 3 - Altera��o   =====\n");
    printf("===== 4 - Exclus�o    =====\n");
    printf("===== 5 - Sair        =====\n");
    printf("===========================\n");
    printf("Digite uma op��o: ");
    scanf("%d", &opcao);

    system("cls");

    if(opcao <= 0 || opcao > 5) {
      printf("Digite uma op��o v�lida!\n\n");
    }
  } while(opcao != 5);
  return;
}

int main(void) {
  setlocale(LC_ALL, "");

  int exercicio;

  printf("====== Exerc�cio la�o de repeti��o ======\n");
  printf("====== 1 - Com For                 ======\n");
  printf("====== 2 - Com While               ======\n");
  printf("====== 3 - Com Do While            ======\n");
  printf("=========================================\n");
  printf("Digite uma op��o: ");
  scanf("%d", &exercicio);

  if(exercicio <= 0 || exercicio > 3) {
    printf("Digite uma op��o v�lida!\n");
  }

  system("cls");

  switch(exercicio) {
    case 1:
    exercicioLacoDeRepeticaoFor();
    break;
    case 2:
    exercicioLacoDeRepeticaoWhile();
    break;
    case 3:
    exercicioLacoDeRepeticaoDoWhile();
    break;
    default:
    printf("Op��o Inv�lida!");
    break;
  }
  return 0;
}
