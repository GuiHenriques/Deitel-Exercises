// Múltiplos.
# include <stdio.h>

int multiplo(int, int);

int main(void)
{
    int a, b;
    printf("Digite 0 0 para sair.\n");
    do {
        printf("Digite dois inteiros: ");
        scanf("%d%d", &a, &b);

        if (multiplo(a, b))
            printf("Multiplos!\n");
        else
            printf("Nao sao Multiplos!\n");
    }   while (a != 0 && b != 0);
}

int multiplo(int n1, int n2)
{
    if ((n1 % n2 == 0) || (n2 % n1 == 0))
        return 1;
    else
        return 0;
}