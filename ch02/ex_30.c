// Separando dígitos em um inteiro.
#include <stdio.h>

int main(void)
{
    int numero;
    printf("Digite um numero inteiro de 5 digitos: ");
    scanf("%d", &numero);

    printf("%d   ", numero/10000);
    printf("%d   ", (numero/1000)%10);
    printf("%d   ", (numero/100)%10);
    printf("%d   ", (numero/10)%10);
    printf("%d   ", numero % 10);
}