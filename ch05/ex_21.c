// Projeto: desenhando formas com caracteres.
# include <stdio.h>

void block(int, char);
void pyramid(int, char);
void diamond(int, char);

int main(void)
{
    int lado, c;

    printf("Lado: ");
    scanf("%d", &lado);
    
    printf("Caractere: ");
    scanf(" %c", &c);

    printf("\nBlock:\n");
    block(lado, c);

    printf("\nPyramid:\n");
    pyramid(lado, c);

    printf("\nDiamond:\n");
    diamond(lado, c);
}

void block(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            printf("%c", c);
        printf("\n");
    }
}

void pyramid(int n, char c)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= i * 2; j++)
            printf("%c", c);
        printf("\n");
    }
}

void diamond(int n, char c)
{
    // Parte de cima
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
            printf(" ");
        for (int j = 1; j <= i * 2; j++)
            printf("%c", c);
        printf("\n");
    }
    
    // Parte de baixo
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            printf(" ");
        for (int j = n; j >= i; j--)
            printf("%c", c);
        for (int j = n; j >= i; j--)
            printf("%c", c);
        printf("\n");
    }
}