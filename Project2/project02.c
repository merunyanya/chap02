/* ���ϸ�: project2.c

* ����: �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷� �ۼ�, �л��� ��ȣ�� ����, ������ �Ǽ��� �Է¹޴´�.

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
	int num;
	float grade;

	printf("��ȣ?");
	scanf("%d", &num);

	printf("����?");
	scanf("%f", &grade);

	printf("%d�� �л��� ������ %6f�Դϴ�.", num, grade);


	return;

}