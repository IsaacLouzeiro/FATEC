#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// Criar um menu de usuario

// 1- Inclusao
// 2- Consulta
// 3- Alteração
// 4- Exclusão
// 5- Sair

// Usar laco de repetição para mostrar enquanto
// o usuário não selecionar 5.

void exercicioLacoDeRepeticaoFor() {
  int opcao;

  for(int opcao = 0; opcao != 5;) {
    printf("===== Menu de usuário =====\n");
    printf("===== 1 - Inclusão    =====\n");
    printf("===== 2 - Consulta    =====\n");
    printf("===== 3 - Alteração   =====\n");
    printf("===== 4 - Exclusão    =====\n");
    printf("===== 5 - Sair        =====\n");
    printf("===========================\n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    system("cls");

    if(opcao <= 0 || opcao > 5) {
      printf("Digite uma opção válida!\n\n");
    }

  }
  return;
}

void exercicioLacoDeRepeticaoWhile() {
  int opcao = 0;

  while(opcao != 5) {
    printf("===== Menu de usuário =====\n");
    printf("===== 1 - Inclusão    =====\n");
    printf("===== 2 - Consulta    =====\n");
    printf("===== 3 - Alteração   =====\n");
    printf("===== 4 - Exclusão    =====\n");
    printf("===== 5 - Sair        =====\n");
    printf("===========================\n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    system("cls");

    if(opcao <= 0 || opcao > 5) {
      printf("Digite uma opção válida!\n\n");
    }
  }
  return;
}

void exercicioLacoDeRepeticaoDoWhile() {
  int opcao;

  do {
    printf("===== Menu de usuário =====\n");
    printf("===== 1 - Inclusão    =====\n");
    printf("===== 2 - Consulta    =====\n");
    printf("===== 3 - Alteração   =====\n");
    printf("===== 4 - Exclusão    =====\n");
    printf("===== 5 - Sair        =====\n");
    printf("===========================\n");
    printf("Digite uma opção: ");
    scanf("%d", &opcao);

    system("cls");

    if(opcao <= 0 || opcao > 5) {
      printf("Digite uma opção válida!\n\n");
    }
  } while(opcao != 5);
  return;
}

int main(void) {
  setlocale(LC_ALL, "");

  int exercicio;

  printf("====== Exercício laço de repetição ======\n");
  printf("====== 1 - Com For                 ======\n");
  printf("====== 2 - Com While               ======\n");
  printf("====== 3 - Com Do While            ======\n");
  printf("=========================================\n");
  printf("Digite uma opção: ");
  scanf("%d", &exercicio);

  if(exercicio <= 0 || exercicio > 3) {
    printf("Digite uma opção válida!\n");
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
    printf("Opção Inválida!");
    break;
  }
  return 0;
}
