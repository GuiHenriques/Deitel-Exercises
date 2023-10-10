// Descubra o número.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
    char *keep;
    int n = rand();
    printf("%i\n", n);

    do {
        // repeat
        printf("Play again (y/n)? ");
        scanf("%c", &keep);
        printf("%c\n", keep);
        
    } while (strcmp(keep, "y") == 0);
}