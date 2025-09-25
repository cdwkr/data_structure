#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 5;
    int *arr;

    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }


    for (int i = 0; i < n; i++) 
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);

    return 0;
}