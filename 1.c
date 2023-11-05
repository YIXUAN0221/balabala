#include <stdio.h>
int main(void)
{
    int i, j, len;
    puts("生成一个正方形");
    printf("正方形有几层：");
    scanf("%d", &len);
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len; j++)
            putchar('*');
        printf("\n");
    }

    return 0;
}