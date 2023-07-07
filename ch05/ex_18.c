// Par ou ímpar.
# include <stdio.h>

int even(int);

int main(void)
{  
    int n;

    printf("Digite um inteiro: ");
    scanf("%d", &n);
    
    do {

        if (even(n))
            printf("Par\n");
        else
            printf("Impar\n");
    
        printf("Digite um inteiro: ");
        scanf("%d", &n);
    }   while (n != 0);
}

int even(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}