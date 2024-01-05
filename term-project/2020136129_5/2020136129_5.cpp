#include <stdio.h>

void right_angled_triangle(int, int);

int main(void)
{
    int x, y;

    printf("(height, direction) >>");
    scanf("%d %d", &x, &y);

    right_angled_triangle(x, y);

    return 0;
}
void right_angled_triangle(int height, int direction)
{
    int i, j;

    switch (direction)
    {
    case 0:
        for (i = 1; i <= height; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    case 1:
        for (i = height; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        break;

    default:
        printf("방향을 다시 입력하세요.\n");
        break;
    }
}