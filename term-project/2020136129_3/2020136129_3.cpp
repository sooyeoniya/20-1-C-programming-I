#include <stdio.h>

int main(void)
{
	double x, y, a, result;

	printf("x�� y�� �Է��ϼ��� :");
	scanf("%lf %lf", &x, &y);

	printf("1���� �����ڸ� ������(�Ǽ�,����)�� �Է��ϼ���\n[0] : ���� [1] : ���� : ");
	scanf("%lf", &a);

	result = a * (x - y) - (a - 1) * (x + y);

	printf("result : %.1f\n", result);

	return 0;
}