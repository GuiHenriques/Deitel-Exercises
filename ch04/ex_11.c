// Ache o menor.
# include <stdio.h>

int main(void)
{
    int n, numero, menor;

    printf("Iteracoes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Numero: ");
        scanf("%d", &numero);

        if (i == 0)
            menor = numero;
        else if (numero < menor)
            menor = numero;
    }
    printf("Menor: %d\n", menor);
}