/* ���ϸ�: project5.c

 * ����: �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷� �ۼ�, �����Դ� �Ǽ��� �Է¹���, �Ҽ��� ���� 2�ڸ����� ���

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

	float weight;

	printf("������?");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %4.2fKG�Դϴ�.", weight);

	return;
}