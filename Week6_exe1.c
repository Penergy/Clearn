#include <stdio.h>
int 
int main()
{
    const int number = 200;
    int cnt = 0;
    int container[200];
    int i;
    int m, n;
    int reside;
    scanf("%d/%d", &m, &n);

    for (i = 0; i < number; i++)
    {
        container[i] = 0;
    }
    reside = m%n;
    do
    {
        reside *= 10;
        int digit = reside/n;
        reside %= n;
        if(cnt<200)
        {
            container[cnt] = digit;
            cnt++;
        }
    } while (reside && cnt < 200);

    printf("0.");
    for(i = 0; i < cnt; i++)
    {
        printf("%d", container[i]);
    }
    return 0;
}