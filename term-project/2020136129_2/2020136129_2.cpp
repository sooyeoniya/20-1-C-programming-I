#include <stdio.h>

int main(void)
{
	char x;

	printf("���� �Է��ϼ���: ");
	scanf("%c", &x);

	(x >= 'a' && x <= 'z') ? printf("��µ� ��: 111\n") : printf("��µ� ��: 999\n");

	return 0;
}