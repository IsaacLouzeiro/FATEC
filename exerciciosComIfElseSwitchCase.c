#include <stdio.h>
#include <locale.h>

void maiorNumero() {
  int num1, num2, num3, num4, maior;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  printf("Digite o terceiro número: ");
  scanf("%d", &num3);
  printf("Digite o quarto número: ");
  scanf("%d", &num4);
  maior = num1;
  if (num2 > maior) {
    maior = num2;
  } if (num3 > maior) {
    maior = num3;
  } if (num4 > maior) {
    maior = num4;
  }
  printf("O maior número é: %d", maior);
  return;
}

void tipoPoligono() {
  int numTriangulo;
  printf("Digite os lados de um polígono: ");
  scanf("%d", &numTriangulo);
  if (numTriangulo <= 2) {
    printf("Não existe polígono com menos de 3 lados");
  } else if (numTriangulo == 3) {
    printf("É um triangulo");
  } else if (numTriangulo == 4) {
    printf("É um quadrado");
  } else if (numTriangulo == 5) {
    printf("É um pentágono");
  } else if (numTriangulo == 6) {
    printf("É um hexágono");
  } else if (numTriangulo == 7) {
    printf("É um heptagono");
  } else if (numTriangulo == 8) {
    printf("É um octógono");
  } else if (numTriangulo > 8) {
    printf("Não sei qual é...");
  }
  return;
}

void tipoTriangulo() {
  int lado1, lado2, lado3;
  printf("Insira o número do primeiro lado do triangulo: ");
  scanf("%d", &lado1);
  printf("Insira o número do segundo lado do triangulo: ");
  scanf("%d", &lado2);
  printf("Insira o número do terceiro lado do triangulo: ");
  scanf("%d", &lado3);
  if(lado1 == lado2 && lado1 == lado3) {
    printf("O triangulo é equilatero");
  } else if (lado1 == lado2) {
    printf("O triangulo é isósceles");
  } else if (lado1 == lado3) {
    printf("O triangulo é isósceles");
  } else if (lado2 == lado3) {
    printf("O triangulo é isósceles");
  } else {
    printf("O triangulo é escaleno");
  }
  return;
}

void numeroFormaCrescente() {
  int num1, num2, num3, num4;
  int primeiro, segundo, terceiro, quarto;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  printf("Digite o terceiro número: ");
  scanf("%d", &num3);
  printf("Digite o quarto número: ");
  scanf("%d", &num4);
  if (num1 > num2 && num1 > num3 && num1 > num4) {
    quarto = num1;
    if(num2 > num3 && num2 > num4) {
      terceiro = num2;
      if(num3 > num4) {
        segundo = num3;
        primeiro = num4;
      } else {
        primeiro = num3;
        segundo = num4;
      }

    } else if(num3 > num2 && num3 > num4) {
      terceiro = num3;
      if(num2 > num4) {
        segundo = num2;
        primeiro = num4;
      } else {
        primeiro = num2;
        segundo = num4;
      }

    } else if(num4 > num3 && num4 >num3) {
      terceiro = num4;
      if(num2 > num3) {
        segundo = num2;
        primeiro = num3;
      } else {
        segundo = num3;
        primeiro = num2;
      }
    }
  }

  else if (num2 > num1 && num2 > num3 && num2 > num4) {
    quarto = num2;
    if(num1 > num3 && num1 > num4) {
      terceiro = num1;
      if(num3 > num4) {
        segundo = num3;
        primeiro = num4;
      } else {
        primeiro = num3;
        segundo = num4;
      }

    } else if(num3 > num1 && num3 > num4) {
      terceiro = num3;
      if(num1 > num4) {
        segundo = num1;
        primeiro = num4;
      } else {
        primeiro = num1;
        segundo = num4;
      }

    } else if(num4 > num3 && num4 >num3) {
      terceiro = num4;
      if(num1 > num3) {
        segundo = num1;
        primeiro = num3;
      } else {
        segundo = num3;
        primeiro = num1;
      }
    }
  }

  else if (num3 > num1 && num3 > num2 && num3 > num4) {
    quarto = num3;
    if(num2 > num1 && num2 > num4) {
      terceiro = num2;
      if(num1 > num4) {
        segundo = num1;
        primeiro = num4;
      } else {
        primeiro = num1;
        segundo = num4;
      }

    } else if(num1 > num2 && num1 > num4) {
      terceiro = num1;
      if(num2 > num4) {
        segundo = num2;
        primeiro = num4;
      } else {
        primeiro = num2;
        segundo = num4;
      }

    } else if(num4 > num1 && num4 > num2) {
      terceiro = num4;
      if(num1 > num2) {
        segundo = num1;
        primeiro = num2;
      } else {
        segundo = num2;
        primeiro = num1;
      }
    }
  }

  else if (num4 > num1 && num4 > num2 && num4 > num3) {
    quarto = num4;
    if(num2 > num1 && num2 > num3) {
      terceiro = num2;
      if(num1 > num3) {
        segundo = num1;
        primeiro = num3;
      } else {
        primeiro = num1;
        segundo = num3;
      }

    } else if(num1 > num2 && num1 > num3) {
      terceiro = num1;
      if(num2 > num3) {
        segundo = num2;
        primeiro = num3;
      } else {
        primeiro = num2;
        segundo = num3;
      }

    } else if(num3 > num1 && num3 > num2) {
      terceiro = num3;
      if(num1 > num2) {
        segundo = num1;
        primeiro = num2;
      } else {
        segundo = num2;
        primeiro = num1;
      }
    }
  }

  printf("%d, %d, %d, %d", primeiro, segundo, terceiro, quarto);
  return;
}

int menuDeSelecao() {
  int selecionado;
  printf("///////LISTA DE EXERCICIOS/////////\n");
  printf("//1 - Qual é o maior número      //\n");
  printf("//2 - Tipo de polígono           //\n");
  printf("//3 - Qual é o tipo do triangulo //\n");
  printf("//4 - Números em forma crescente //\n");
  printf("///////////////////////////////////\n");

  printf("\nInsira o exercicio a ser exibido: ");
  scanf("%d", &selecionado);

  return selecionado;
}

int main(void) {
  setlocale(LC_ALL, "");
  int selecionado = menuDeSelecao();

  switch(selecionado) {
    case 1:
      maiorNumero();
    break;

    case 2:
      tipoPoligono();
    break;

    case 3:
      tipoTriangulo();
    break;

    case 4:
      numeroFormaCrescente();
    break;

    default:
    printf("Opção inválida!");
  }
  return 0;
}
