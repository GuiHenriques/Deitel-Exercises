// Problema do else pendurado.
# include <stdio.h>

int main(void)
{
    int x = 9;  // 11
    int y = 11; // 9
    
    // a)
    printf("a) \n");
    if ( x < 10 )
    if ( y > 10 )
    printf("*****\n");
    else
    printf("#####\n");
    printf("$$$$$\n");
    
    // b)
    printf("b)\n");
    if ( x < 10 ) {
        if ( y > 10 )
            printf("*****\n");
    }
    else {
        printf("#####\n");
        printf("$$$$$\n");
    }
}