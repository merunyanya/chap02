/* ���ϸ�: project10.c

   * ����: ������ 8����, 10����, 16���� �� �ϳ��� �Է¹޾� 8����, 10����, 16���� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷� �ۼ� ...

   * �ۼ���: ������

   * ��¥: 2025.3.20

   * ����: v1.0

   */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Main(void);

int main()
{
	Main();
	return 0;
}

void Main(void)
{
	int n;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.");
	printf("����?");

	scanf("%i", &n);

	printf("8����: %#o\n", n);
	printf("10����: %d\n", n);
	printf("16����: %#x\n", n);

	return;
}