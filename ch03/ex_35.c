// Testador de palíndromo.
# include <stdio.h>

int main(void)
{
    int n;

    printf("Numero: ");
    scanf("%d", &n);

    // x o o o x
    //printf("%d - %d\n", n/10000, n%10);
    // o x o x o
    //printf("%d - %d\n", n/1000%10, n/10%10);
    
    if ((n/10000 == n%10) && (n/1000%10 == n/10%10))
        printf("Palindromo!");
    else
        printf("Nao Palindromo.");

}