#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�������� �Է��ϼ���: ");
	scanf("%d", &x);

	y = (x - x % 1000) / 1000 * 8 + (x % 1000 - x % 100) / 100 * 4 + (x % 100 - x % 10) / 10 * 2 + x % 10;

	if (y >= 0 && y <= 15) 
		printf("������ %d�� ������ ���� %d\n", x, y);
	else
		printf("�Է��� ���� 4��Ʈ ���̸� ���� �������� �ƴմϴ�.\n");

	return 0;
}