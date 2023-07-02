// Saída tabular.
# include <stdio.h>

int main(void)
{
    int n = 3;

    printf("%s\t%s\t%s\t%s\n", "A", "A+2", "A+4", "A+6");

    while (n <= 15)
    {
        printf("%d\t%d\t%d\t%d\n", n, n+2, n+4, n+6);
        n += 3;
    }
}