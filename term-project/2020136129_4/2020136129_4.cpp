#include <stdio.h>

int main(void)
{
	int x, y;

	printf("이진수를 입력하세요: ");
	scanf("%d", &x);

	y = (x - x % 1000) / 1000 * 8 + (x % 1000 - x % 100) / 100 * 4 + (x % 100 - x % 10) / 10 * 2 + x % 10;

	if (y >= 0 && y <= 15) 
		printf("이진수 %d의 십진수 값은 %d\n", x, y);
	else
		printf("입력한 값은 4비트 길이를 갖는 이진수가 아닙니다.\n");

	return 0;
}