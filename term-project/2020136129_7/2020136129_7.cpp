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
	printf("1. ����\n");
	printf("2. ����\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("5. ����\n");
	printf("6. sin\n");
	printf("7. cos\n");
	printf("8. tan\n");
	printf("9. ��\n");
	printf("10. ��\n");
	printf("11. ln\n");
	printf("���ϴ� �޴��� �����Ͻÿ�(1-11): ");
	scanf("%d", &number);

	if (number == 1)
	{
		printf("���� �� �� �Է�: ");
		scanf("%lf %lf", &x, &y);
		printf("������: %lf\n", add(x, y));
	}
	else if (number == 2)
	{
		printf("���� �� �� �Է�: ");
		scanf("%lf %lf", &x, &y);
		printf("������: %lf\n", minus(x, y));
	}
	else if (number == 3)
	{
		printf("���� �� �� �Է�: ");
		scanf("%lf %lf", &x, &y);
		printf("������: %lf\n", multiply(x, y));
	}
	else if (number == 4)
	{
		printf("���� �� �� �Է�: ");
		scanf("%lf %lf", &x, &y);
		printf("������: %lf\n", divide(x, y));
	}
	else if (number == 5)
	{
		printf("�� ���� �Է�: ");
		scanf("%lf %lf", &x, &y);
		printf("������: %lf\n", pow(x, y));
	}
	else if (number == 6)
	{
		printf("���� �Է�: ");
		scanf("%lf", &x);
		printf("������: %lf\n", sin(x));
	}
	else if (number == 7)
	{
		printf("���� �Է�: ");
		scanf("%lf", &x);
		printf("������: %lf\n", cos(x));
	}
	else if (number == 8)
	{
		printf("���� �Է�: ");
		scanf("%lf", &x);
		printf("������: %lf\n", tan(x));
	}
	else if (number == 9)
	{
		printf("�� ���� ���� �Է�: ");
		scanf("%lf", &x);
		printf("������: %lf\n", x * PI);
	}
	else if (number == 10)
	{
		printf("��Ʈ ���� �Է�: ");
		scanf("%lf", &x);
		printf("������: %lf\n", sqrt(x));
	}
	else
	{
		printf("ln ���� �Է�: ");
		scanf("%lf", &x);
		printf("������: %lf\n", log(x));
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