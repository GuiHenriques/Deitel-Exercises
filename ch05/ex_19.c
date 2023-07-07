// Exibindo um quadrado de asteriscos.
# include <stdio.h>

void block(int);

int main(void)
{
    int n;
    printf("Lado: ");
    scanf("%d", &n);

    block(n);
}

void block(int side)
{
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
            printf("*");
        printf("\n");
    }
}