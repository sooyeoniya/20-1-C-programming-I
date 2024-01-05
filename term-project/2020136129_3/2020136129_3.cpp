#include <stdio.h>

int main(void)
{
	double x, y, a, result;

	printf("x와 y를 입력하세요 :");
	scanf("%lf %lf", &x, &y);

	printf("1개의 연산자를 숫자형(실수,정수)로 입력하세요\n[0] : 덧셈 [1] : 뺄셈 : ");
	scanf("%lf", &a);

	result = a * (x - y) - (a - 1) * (x + y);

	printf("result : %.1f\n", result);

	return 0;
}