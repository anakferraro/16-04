#include <stdio.h>

int recebeNumero(void );

int soma (int x, int y) {
    return x + y;
}


int main (void) {
        int n1, n2, resultado;

        n1 = recebeNumero ();
        printf ("Digitado: %d\n", n1);
        n2 = recebeNumero ();
        printf ("Digitado: %d\n", n2);
       
       resultado = soma(n1, n2);
       printf ("Resultado: %d", resultado);
    return 0;
}

int recebeNumero(void) {
    int x;

    printf ("Digite um número: ");
    scanf("%d", &x);

    return x;
}