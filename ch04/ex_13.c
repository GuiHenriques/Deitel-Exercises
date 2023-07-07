// Calculando o produto de inteiros ímpares.
# include <stdio.h>

int main(void)
{
    int produto = 1;

    for (int n = 1; n <= 15; n += 2)
        produto *= n;
    printf("Produto: %d\n", produto);
}