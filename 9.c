#include <stdio.h>
void alert(int n)
{
    while (n-- > 0)
    {
        printf("%d\a\n", n);
    }
}

int main()
{
    int i;
    printf("响铃次数：");
    scanf("%d", &i);
    alert(i);
    return 0;
}
