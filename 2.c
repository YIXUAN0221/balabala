int main()
{
    int i;
    int j;
    int len;
    printf("让我们来画一个金字塔。\n");
    printf("金字塔有几层：");
    scanf("%d", &len);
    for (i = 1; i <= len; i++)
    {
        for (j = 1; j <= len - i; j++)
            putchar(' ');
        for (j = 1; j <= (i - 1) * 2; j++)
        {
            putchar('*');
        }
        putchar('*');
        putchar('\n');
    }
    return 0;
}