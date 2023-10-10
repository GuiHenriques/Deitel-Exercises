// Jogando uma moeda.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int flip(void);

int main(void)
{
    int caras = 0, coroas = 0;

    srand(time(NULL));

    for (int i = 0; i < 1000; i++)
    {
        if (flip())
            caras++;
        else
            coroas++;
    }

    printf("Caras: %i\nCoroas: %i\n", caras, coroas);
}

int flip(void)
{
    int n = rand();
    if (n%2==0)
        return 0;
    else
        return 1;
}