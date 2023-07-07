// Programa de exibição de gráfico de barras.
# include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++)
    {
        int n;
        printf("Numero: ");
        scanf("%d", &n);
        printf("%d:\t", n);

        for (int j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
}