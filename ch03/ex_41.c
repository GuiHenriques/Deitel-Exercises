// Múltiplos de 2 com um loop infinito.
# include <stdio.h>

int main(void)
{
    double n = 2;

    while (2 == 2)
    {
        printf("%.0f\n", n);
        n *= 2;
    }
}