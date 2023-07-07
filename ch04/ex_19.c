//Calculando vendas.
# include <stdio.h>

int main(void)
{
    float p1 = 2.98;
    float p2 = 4.50;
    float p3 = 9.98;
    float p4 = 4.49;
    float p5 = 6.87;

    int f;
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;

    while (f != -1)
    {
        printf("Digite o numero do produto: ");
        scanf("%d", &f);

        switch (f)
        {
            case 1:
                f1++;
                break;
            case 2:
                f2++;
                break;
            case 3:
                f3++;
                break;
            case 4:
                f4++;
                break;
            case 5:
                f5++;
                break;
            case '\n':
            case '\t':
            case ' ':
                printf("Produto invalido!\n");
                break;
            default:
                break;
        }
    }
    
    printf("Produto 1: R$%.2f\n", f1*p1);
    printf("Produto 2: R$%.2f\n", f2*p2);
    printf("Produto 3: R$%.2f\n", f3*p3);
    printf("Produto 4: R$%.2f\n", f4*p4);
    printf("Produto 5: R$%.2f\n", f5*p5);
}