#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int na;
    printf("요소 개수:");
    scanf("%d", &na);
    int *a = calloc(na, sizeof(int));

    if (a == NULL)
        printf("메모리 할당에 실패했습니다.\n");
    else
    {
        printf("%d개의 정수를 입력하세요.\n", na);
        for (int i = 0; i < na; i++)
        {
            printf("a[%d]:", i);
            scanf("%d", &a[i]);
        }
        printf("입력한 정수는 다음과 같습니다.\n");
        for (int i = 0; i < na; i++)
            printf("a[%d] = %d\n", i, a[i]);
        
        free(a);

    }




}