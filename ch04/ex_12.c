// Calculando a soma de inteiros pares.
# include <stdio.h>

int main(void)
{
    int n, soma = 0;

    for (n = 2; n <= 30; n += 2)
        soma += n;
    
    printf("Soma: %d\n", soma);
}