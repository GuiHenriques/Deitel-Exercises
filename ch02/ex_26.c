// Múltiplos.
#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d%d", &num1, &num2);

    if (num1 % num2 == 0)
        printf("%d é múltiplo de %d\n", num1, num2);
    else
        printf("%d não é múltiplo de %d\n", num1, num2);

    return 0;
}