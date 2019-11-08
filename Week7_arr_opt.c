#include <stdio.h>
/**
 * @param key
 * /
int search(int key, int a[], int length);

int main()
{
    int a[13] = {[1] = 2, [2] = 3, 3}; //{},4,6,7,1,3,5,9,11,13,23,14,32};
    // int a[] = {2,4,6,7,1,3,5,9,11,13,23,14,32};
    {
        int i;
        printf("%lu\n", sizeof(a));
        printf("%lu\n", sizeof(a[0]));
        for(i=0; i<13; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }

    // 数据的大小

    return 0;
}