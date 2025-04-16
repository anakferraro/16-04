#include <stdio.h>

int igual(int x, int y);
int maior(int x, int y);
int menor(int x, int y);

int main() {
  int num1, num2;

  printf("Digite um número: ");
  scanf("%d", &num1);

  printf("Digite um segundo número: ");
  scanf("%d", &num2);

    printf("Os números são iguais? %d\n", igual(num1, num2));
  
    printf("Maior: %d\n", maior(num1, num2));
    printf("Menor: %d\n", menor(num1, num2));

  return 0;
}

int igual(int x, int y) {
  if (x == y) {
    return 1;
  } else {
    return 0;
  }
}

int maior(int x, int y) {
  if (x > y) {
    return x;
  } else {
    return y;
  }
}

int menor(int x, int y) {
  if (x < y) {
    return x;
  } else {
    return y;
  }
}

