#include <stdio.h>

int main(void)
{
	int x;

	printf("숫자를 입력하세요: ");
	scanf("%d", &x);

	if (x == 80)
		printf("출력된 값: %c\n", 'a');

	return 0;
}