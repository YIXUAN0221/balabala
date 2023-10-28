#include <stdio.h>
int main(void)
{
    puts("请输入两个整数。");
    double a, b;
    printf("整数a：");
    scanf("%lf", &a);
    printf("整数b：");
    scanf("%lf", &b);
    printf("a是b的%f%%。\n", 100 * a / b);
    return 0;
}