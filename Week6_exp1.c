#include <stdio.h>



int main()
{
    const int number = 10;
    int stats[number];
    int i;
    int input;
    for (int i = 0; i < number; i++)
    {
        stats[i] = 0; 
    }
    scanf("%d", &input);
    while (input != -1)
    {
        if (input >= 0 && input <= 9)
        {
            stats[input]++;
        }
        scanf("%d", &input);
    }
    for (int i = 0; i < number; i++)
    {
        printf("i = %d, count = %d\n", i, stats[i]);
    }
    return 0;
}