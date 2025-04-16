#include <stdio.h>
#include "util.h"

int main() {
    double raio;

    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio);

    double d = diametro(raio);
    double c = circunferencia(raio);
    double a = area(raio);

    printf("Diâmetro: %.2lf\n", d);
    printf("Circunferência: %.2lf\n", c);
    printf("Área: %.2lf\n", a);

    return 0;
}
