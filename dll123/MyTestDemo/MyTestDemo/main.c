#include <stdio.h>
#include"myMath.h"
int main() {
    int a = 3, b = 4;
    printf("a+b=%d\n", add(a, b));
    printf("a-b=%d\n", sub(a, b));
    printf("a*b=%d\n", mul(a, b));
    printf("a/b=%d", div(a, b));
    return 0;
}