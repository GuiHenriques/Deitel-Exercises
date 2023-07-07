// Lados de um triângulo.
# include <stdio.h>

int main(void)
{
    float a, b, c;
    printf("Lados: ");
    scanf("%f%f%f", &a, &b, &c);

    if ((a+b > c) && (a+c > b) && (b+c > a))
        printf("Forma um triangulo!");
    else
        printf("Nao forma um triangulo!");
}