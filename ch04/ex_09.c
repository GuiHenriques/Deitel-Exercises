// Soma de uma sequência de inteiros.
# include <stdio.h>

int main(void)
{
    int n, numero, soma = 0;

    printf("Iteracoes: ");
    scanf("%d", &n);
    
    for (int c = 1; c <= n; c++)
    {    
        printf("Numero: ");
        scanf("%d", &numero);

        soma += numero;
    }
    printf("Soma: %d\n", soma);
}