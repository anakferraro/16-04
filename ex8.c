#include <stdio.h>

double area(double raio) {
    double pi = 3.14;
    return pi * raio * raio;
}

int main() {
    double raio, resultado;

    printf("Informe o valor do raio do círculo para calcular a área: ");
    scanf("%lf", &raio);

    
    resultado = area(raio);
    printf("A área do círculo é: %.2lf\n", resultado);

    return 0;
}