// Problema de impressão de triângulo.
# include <stdio.h>

int main(void)
{
    int n = 10;
    
    // (A)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        // printf("%d", i);
        printf("\n");
    }
    // (B)
    for (int i = 1; i < n; i++)
    {
        for (int j = 10; j >= i; j--)
            printf("*");
        printf("\n");
    }

    // (C)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int j = 10; j >= i; j--)
            printf("*");
        printf("\n");
    }

    // (D)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 10; j > i; j--)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");

    }
}