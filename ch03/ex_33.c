// Quadrado de asteriscos.
# include <stdio.h>

int main(void)
{
    int n;
    int i = 0;

    printf("Numero de Lados: ");
    scanf("%d", &n);

    while (i++ < n)
    {
        int j = 0;
        while (j++ < n)
        {
            printf("*");
        }
        printf("\n");
    }
}