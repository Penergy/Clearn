#include <stdio.h>

int main()
{
    int hour1, minute1;
    int hour2, minute2;
    int n = 10;
    // scanf("%d %d", &hour1, &minute1);
    // scanf("%d %d", &hour2, &minute2);

    int ih = hour2 - hour1;
    int im = minute2 - minute1;
    // if( im < 0)
    // {
    //     im = 60 + im;
    //     ih --;
    // }
    if (1 <= n && n <= 10)
    {
        printf("ok\n");
    }
    // printf("%d hours, %d minutes\n", ih, im);

    const int MINOR = 35;

    int age = 0;

    printf("�������������: ");
    scanf("%d", &age);

    printf("���������%d�ꡣ\n", age);

    if (age < MINOR)
    {
        printf("���������õģ�");
    }

    printf("�����������ľ������磬�ú���ϧ�ɡ�\n");

    return 0;
}