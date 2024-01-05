#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

double add(double x, double y);
double minus(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);

int main(void)
{
	int number;
	double x, y;

	printf("====================\n\tMENU\t\n====================\n");
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 제곱\n");
	printf("6. sin\n");
	printf("7. cos\n");
	printf("8. tan\n");
	printf("9. π\n");
	printf("10. √\n");
	printf("11. ln\n");
	printf("원하는 메뉴를 선택하시오(1-11): ");
	scanf("%d", &number);

	if (number == 1)
	{
		printf("숫자 두 개 입력: ");
		scanf("%lf %lf", &x, &y);
		printf("연산결과: %lf\n", add(x, y));
	}
	else if (number == 2)
	{
		printf("숫자 두 개 입력: ");
		scanf("%lf %lf", &x, &y);
		printf("연산결과: %lf\n", minus(x, y));
	}
	else if (number == 3)
	{
		printf("숫자 두 개 입력: ");
		scanf("%lf %lf", &x, &y);
		printf("연산결과: %lf\n", multiply(x, y));
	}
	else if (number == 4)
	{
		printf("숫자 두 개 입력: ");
		scanf("%lf %lf", &x, &y);
		printf("연산결과: %lf\n", divide(x, y));
	}
	else if (number == 5)
	{
		printf("밑 지수 입력: ");
		scanf("%lf %lf", &x, &y);
		printf("연산결과: %lf\n", pow(x, y));
	}
	else if (number == 6)
	{
		printf("각도 입력: ");
		scanf("%lf", &x);
		printf("연산결과: %lf\n", sin(x));
	}
	else if (number == 7)
	{
		printf("각도 입력: ");
		scanf("%lf", &x);
		printf("연산결과: %lf\n", cos(x));
	}
	else if (number == 8)
	{
		printf("각도 입력: ");
		scanf("%lf", &x);
		printf("연산결과: %lf\n", tan(x));
	}
	else if (number == 9)
	{
		printf("π에 곱할 숫자 입력: ");
		scanf("%lf", &x);
		printf("연산결과: %lf\n", x * PI);
	}
	else if (number == 10)
	{
		printf("루트 숫자 입력: ");
		scanf("%lf", &x);
		printf("연산결과: %lf\n", sqrt(x));
	}
	else
	{
		printf("ln 숫자 입력: ");
		scanf("%lf", &x);
		printf("연산결과: %lf\n", log(x));
	}
}

double add(double x, double y)
{
	return x + y;
}

double minus(double x, double y)
{
	return x - y;
}

double multiply(double x, double y)
{
	return x * y;
}
double divide(double x, double y)
{
	return x / y;
}