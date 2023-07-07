// Cálculos de hipotenusa.
# include <stdio.h>
# include <math.h>

float hipotenusa(float a, float b);

int main(void)
{
    float a, b;
    printf("Cateto 1: ");
    scanf("%f", &a);
    printf("Cateto 2: ");
    scanf("%f", &b);

    printf("Hipotenusa: %.2f\n", hipotenusa(a, b));

}

float hipotenusa(float a, float b)
{
    float hip;
    hip = sqrt(a*a + b*b);
    return hip;
}
