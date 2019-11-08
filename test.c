#include <stdio.h>

int main()
{
    int input;
    int digit;
    int cnt = 1;
    int mask = 1;
    scanf("%d", &input);

    if (input >= -100000 && input <= 100000)
    {
        if (input == 0)
        {
            printf("ling");
        }
        else
        {
            if (input < 0)
            {
                printf("fu ");
                input *= -1;
            }
            int t = input;
            while (t > 9)
            {
                t /= 10;
                cnt++;
                mask *= 10;
            }

            do
            {
                digit = input / mask; // 取整
                input %= mask;        // 取余
                mask /= 10;
                
                switch (digit)
                {
                case 0:
                    printf("ling");
                    break;
                case 1:
                    printf("yi");
                    break;
                case 2:
                    printf("er");
                    break;
                case 3:
                    printf("san");
                    break;
                case 4:
                    printf("si");
                    break;
                case 5:
                    printf("wu");
                    break;
                case 6:
                    printf("liu");
                    break;
                case 7:
                    printf("qi");
                    break;
                case 8:
                    printf("ba");
                    break;
                case 9:
                    printf("jiu");
                    break;
                default:
                    break;
                }
                if (mask > 0)
                {
                    printf(" ");
                    
                }
            } while (mask > 0);
        }
    }
    return 0;
}