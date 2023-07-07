// Contando 7s.
# include <stdio.h>

int main(void)
{
    // Entrada
    int n, setes = 0;

    printf("Numero: ");
    scanf("%d", &n);

    while (n != 0)
    {
        if (n%10 == 7)
            setes++;
        n /= 10;
    }
    printf("Setes: %d", setes);
}