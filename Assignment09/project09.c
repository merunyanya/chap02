/* ���ϸ�: project9.c

   * ����: 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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

	printf("16���� ����?");
	scanf("%x", &n);

	printf("16���� %x�� 10������ %d�Դϴ�.", n, n);
	return;
}