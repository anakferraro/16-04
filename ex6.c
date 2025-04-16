#include <stdio.h>

double diametro(double raio) {
    return 2 * raio;
}

int main() {
    double raio, resultado;

  printf("Informe o valor do raio do círculo para calcular o diâmetro: ");
    scanf("%lf", &raio);

   resultado = diametro(raio);
    printf("O diâmetro do círculo é: %.2lf\n", resultado);

return 0;
}