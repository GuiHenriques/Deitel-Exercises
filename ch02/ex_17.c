// Imprimindo valores com printf.
# include <stdio.h>

int main(void)
{
    // a) Sem especificadores
    printf("1234\n");

    // b) Com especificadores de conversão
    printf("%d%d%d%d\n", 1, 2, 3, 4);
    
    // c) Quatro printf's
    printf("%d", 1);
    printf("%d", 2);
    printf("%d", 3);
    printf("%d\n", 4);

}
