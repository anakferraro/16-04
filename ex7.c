#include <stdio.h>

double circunferencia(double raio) {
    double PI = 3.14;  
    return 2 * PI * raio;
}

int main() {
    double raio;

     printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    printf("A circunferência do círculo é: %.2f\n", circunferencia(raio));

    return 0;
}