// Máximo divisor comum.
#include <stdio.h>

int mdc(int, int);

int main(void)
{
    int n1, n2;
    printf("Primeiro: ");
    scanf("%i", &n1);
    printf("Segundo: ");
    scanf("%i", &n2);

    printf("MDC: %i\n", mdc(n1, n2));
}

int mdc(int n, int div)
{
    int resto = 1;
    while (resto > 0)
    {
        resto = n%div;
        n = div;
        div = resto;
    }
    return n;
}