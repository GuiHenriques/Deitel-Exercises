// Fatorial!
# include <stdio.h>

int main(void)
{
    int n, i = 1, fact = 1;
    printf("N: ");
    scanf("%d", &n);

    while (++i <= n)
    {
        fact *= i;
    }
    printf("%d", fact);
}