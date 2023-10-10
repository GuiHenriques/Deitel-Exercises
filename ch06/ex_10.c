// Comissões de vendas.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define FSIZE 9

void print_frequency(int array[], int size);

int main(void)
{
    // Inicialize arrays
    int workers[SIZE];
    int wages[SIZE];
    int frequency[FSIZE] = {0};

    // Calculate sells and wages
    for (int i = 0; i < SIZE; i++)
    {
        workers[i] = rand() % 10000 + 1000;
        //workers[i] = i * 1000;
        wages[i] = 200 + workers[i] * 0.09;
    }


    // Set frequencys
    for (int i = 0; i < SIZE; i++)
    {
        int range = (wages[i] - 200)/100;
        if (range > 8)
            range = 8;
        frequency[range]++;
    }

    // Print frequencys
    print_frequency(frequency, FSIZE);
}

void print_frequency(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        printf("%i00 - %i99: ", i+2, i+2);
        for (int j = 0; j < array[i]; j++)
            printf("*");
        printf("\n");
    }
    printf(">>>  1000: ");
    for (int j = 0; j < array[8]; j++)
        printf("*");

}