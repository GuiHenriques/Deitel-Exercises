// Arredondando números.
# include <stdio.h>
# include <math.h>

float arredInteiro(float num);
float arredDecimos(float num);
float arredCentesimos(float num);
float arredMilesimos(float num);

int main(void)
{
    float n;
    float inte, dec, cen, mil;
    printf("Numero: ");
    scanf("%f", &n);

    inte = arredInteiro(n);
    dec = arredDecimos(n);
    cen = arredCentesimos(n);
    mil = arredMilesimos(n);

    printf("\nInteiro: %.0f\n", inte);
    printf("Decimos: %.1f\n", dec);
    printf("Centesimos: %.2f\n", cen);
    printf("Milesimos: %.3f\n", mil);
}

float arredInteiro(float num)
{
    float inteiro;
    inteiro = floor(num + .5);
    printf("%.4f + .5 = %.4f\n", num, num+.5);
    return inteiro;
}

float arredDecimos(float num)
{
    float decimos;
    decimos = floor(num * 10 + .5) / 10;
    printf("%.4f * 10 + .5 = %.4f\n", num, num*10+.5);
    return decimos;
}

float arredCentesimos(float num)
{
    float centesimos;
    centesimos = floor( num * 100 + .5 ) / 100;
    printf("%.4f * 100 + .5 = %.4f\n", num, num*100+.5);
    return centesimos;
}

float arredMilesimos(float num)
{
    float milesimos;
    milesimos = floor(num * 1000 + .5) / 1000;
    printf("%.4f * 1000 + .5 = %.4f\n", num, num*1000+.5);
    return milesimos;
}