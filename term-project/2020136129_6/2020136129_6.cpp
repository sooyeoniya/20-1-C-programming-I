#include <stdio.h>

int main(void)
{
    int number, a = 0, x1, x2 = 10;
 
    printf("(number)>> ");
    scanf("%d", &number);

    for (x1 = 1; number / x1 > 0; x1 *= 10)
    {
        a++;
    }
    x1 /= 10;

    while (a > 0)
    {
        if ((number % x2) / (x2 / 10) != (number % (x1 * 10)) / x1)
            a = 0;
        x1 /= 10;
        x2 *= 10;
       a--;
    }
    if (a == -1)
        printf("회문 아님\n");
    else
        printf("회문\n");

    return 0;
}