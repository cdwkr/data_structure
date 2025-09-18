#include <stdio.h>

int main(void) 
{

    printf("-----곱셈표-----\n");

    for (int i = 1; i <= 9; i++) 
    {
        for (int j = 1; j <= 9; j++) {
            printf("%d x %d = %-4d", i, j, i * j);
        }
        printf("\n");
    }
}