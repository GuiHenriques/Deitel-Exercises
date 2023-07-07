// Números perfeitos.
# include <stdio.h>

int perfect(int);
void fatores(int);

int main(void)
{
    printf("%-8s%8s%8s\n", "Num", "Perfeito", "Fatores");
    for (int i = 1; i <= 10000; i++)
    {
        if (perfect(i))
        {
            printf("%-8d%8s   ", i, "Sim");
            fatores(i);
            printf("\n");
        }
    }
}

int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}

void fatores(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            printf("%d ", i);
    }
}