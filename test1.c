#include <stdio.h>

int main()
{
    int n;
    int m;
    int cnt = 0;
    int x = 2;
    int sum = 0;
    int isPrime = 1;

    scanf("%d %d", &n, &m);

    if (n >= 0 && n <= 200 && m >= 0 && m <= 200 && n <= m)
    {
        while (cnt <= m)
        {
            for (int j = 2; j < x; j++)
            {

                if (x % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
           

            if (isPrime)
            {
                cnt++;
            }

            if (cnt <= m && cnt >= n && isPrime)
            {
                sum += x;
            }
            x++;
            isPrime = 1;
        }
    }
    printf("%d", sum);
    return 0;
}