// Invertendo dígitos.
# include <stdio.h>

void reverse(int);

int main(void)
{
    int n;
    printf("Numero:  ");
    scanf("%d", &n);

    reverse(n);
}

void reverse(int n)
{
    printf("Reverse: ");
    while (n > 0)
    {
        printf("%d", n%10);
        n /= 10;
    }
    printf("\n");
}