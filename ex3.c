#include <stdio.h>

int recebeNumero(void );


int main (void) {
        int n;

        n = recebeNumero ();
        
        printf ("Digitado: %d\n", n);
       
    return 0;
}

int recebeNumero(void) {
    int x;

    printf ("Digite um número: ");
    scanf("%d", &x);

    return x;
}