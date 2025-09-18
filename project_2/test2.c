#include <stdio.h>

int main(void) {

    int n;
    char *foo;

    printf("정수: ");
    scanf("%d", &n);

    foo = (n >0 ) ? "양수" : (n < 0) ? "음수" : "0";
    printf("%s", foo);

    return 0;

}