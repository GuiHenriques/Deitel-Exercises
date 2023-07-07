// Fatoriais.
# include <stdio.h>

int main(void)
{
    int n, fact = 1;

    for (n = 1; n <= 5; n++)
        printf("%d!\t", n);
    printf("\n");
    
    for (n = 1; n <= 5; n++)
    {
        fact *= n;
        printf("%d\t", fact);
    }
}