#include <stdio.h>
int x;
void put_count()
{
    printf("put_count：第%d次\n", x + 1);
    x++;
}

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        put_count();
    }
    return 0;
}
