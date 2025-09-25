#include <stdio.h>
#include <stdlib.h>

int maxof(const int foo[], int elem_cnt) 
{
    int max = foo[0];
    for (int i = 1; i < elem_cnt; i++)
    {
        if (foo[i] > max)
            max = foo[i];
    }
    return max;
}

int main(void)
{
    int number;
    printf("사람 수:");
    scanf("%d", &number);
    int *height = calloc(number, sizeof(int));
    for (int i = 0; i < number; i++)
    {
        printf("height[%d]:", i);
        scanf("%d", &height[i]);
    }

    printf("최대 키: %d\n", maxof(height, number));
    free(height);
    return 0;
}
