  /* ���ϸ�: project11.c

* ���� : ������ ���� ���� 3.14...��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�...

* �ۼ��� : ������

* ��¥ : 2025.3.20

* ���� : v1.0

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
	float n = 3.14159265;
	printf("pi: %.2f\n", n);
	printf("pi: %.4f\n", n);
	printf("pi: %.6f\n", n);
	printf("pi: %.8f\n", n);
	printf("pi: %e\n", n);



}