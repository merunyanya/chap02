/* ���ϸ�: project7.c

 * ����: Ŀ�� ������� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷� �ۼ�, Ŀ�� ������� S, T, G �� �ϳ��� �Է¹޴´�

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
	char size;
	int n;

	printf("Ŀ�� ������(S,T,G)? ");
	scanf("%c %d", &size, &n);
	printf("%c ������ %d���� �ֹ��մϴ�.", size, n);
	return;
}