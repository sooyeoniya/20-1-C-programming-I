#include <stdio.h>

int main(void)
{
	char x;

	printf("값을 입력하세요: ");
	scanf("%c", &x);

	(x >= 'a' && x <= 'z') ? printf("출력된 값: 111\n") : printf("출력된 값: 999\n");

	return 0;
}