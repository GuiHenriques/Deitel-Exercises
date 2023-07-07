// Achar o mínimo.
# include <stdio.h>

int main(void)
{
    float n1, n2, n3;

    printf("Digite tres numeros: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    float min = n1;
    if (n2 < min)
        min = n2;
    if (n3 < min)
        min = n3;

    printf("Menor: %.3f\n", min);

}