#include <stdio.h>
int main(void)
{
    int n;
    int i;
    int j = 0;
    printf("n的值：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        j = i * i;
        printf("%d的二次方是：%d\n", i, j);
    }
    return 0;
}