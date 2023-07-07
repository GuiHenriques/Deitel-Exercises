// Quadrado de asteriscos vazio.
# include <stdio.h>

int main(void)
{
    int n;
    int c = 1;

    printf("Numero de Lados: ");
    scanf("%d", &n);

    while (c <= n)
    {
        // Se for primeiro ou ultimo printa n*'*'
        if (c == 1 || c == n)
        {
            int j = 0;
            while (j++ < n)
                printf("*");
        }

        // Se não printa '* n-2(" ") *'
        else
        {
            printf("*");
            int j = 0;
            while (j++ < n-2)
                printf(" ");
            printf("*");
        }

        // Printa nova linha
        printf("\n");
        c++;
    }
}