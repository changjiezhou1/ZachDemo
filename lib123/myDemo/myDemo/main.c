#include <stdio.h>
#include "myMath.h"
#pragma comment(lib,"D:/lib123/myMath/Debug/myMath.lib")
int main()
{
    int a = 3, b = 5;
    printf("a+b=%d\n", add(3, 5));
    printf("a-b=%d\n", sub(3, 5));
    printf("a*b=%d\n", mul(3, 5));
    printf("a/b=%d", div(3, 5));
    return 0;
}