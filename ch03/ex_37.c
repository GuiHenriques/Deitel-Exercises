// Qual é a velocidade do seu computador?
# include <stdio.h>
# include <time.h>

int main(void)
{
    clock_t start, end;
    double cpu_time;

    start = clock();

    int n = 1;

    while (n <= 300000000) // 300.000.000
    {
        if (n%100000000 == 0) // 100.000.000
            printf("%d\n", n);
        n++;
    }

    end = clock();
    cpu_time = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution Time: %.3f segundos\n", cpu_time);

}