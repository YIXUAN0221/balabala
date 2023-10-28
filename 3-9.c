#include <stdio.h>
int main(void)
{
    int a, b;
    puts("请输入两个整数。");
    printf("整数1：");
    scanf("%d", &a);
    printf("整数2：");
    scanf("%d", &b);
    a == b ? printf("它们相等。\n") : printf("它们不相等。\n");
    return 0;
}