#include <stdio.h>

int sum(int start, int end);

int main()
{
    int ret1 = sum(1, 10);
    int ret2 = sum(20, 30);
    int ret3 = sum(35, 45);

    int i, x, y;
    i = x = y = 0;
    do
    {
        ++i;
        if (i % 2)
            x += i,
                i++;
        y += i++;
    } while (i <= 7);
    printf("%d %d %d", i, x, y);

    printf("sum[1, 10] = %d\n", ret1);
    printf("sum[20, 30] = %d\n", ret2);
    printf("sum[35, 45] = %d\n", ret3);
    return 0;
}

int sum(int start, int end)
{
    int ret = 0;
    for (int i = start; i <= end; i++)
    {
        ret += i;
        ;
    }
    return ret;
}