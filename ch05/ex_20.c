// Exibindo o quadrado de um caractere.
# include <stdio.h>

void block(int, char);

int main(void)
{
    int n;
    char c;

    printf("Lado: ");
    scanf("%d", &n);

    printf("Caractere: ");
    scanf(" %c", &c);

    block(n, c);
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