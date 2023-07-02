// Valor inteiro de um caractere.
#include <stdio.h>

int main(void)
{
    char c;
    printf("Digite um caracter: ");
    scanf("%c", &c);

    printf("Valor inteiro de %c: %d\n", c, c);
}