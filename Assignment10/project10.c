/* 파일명: project10.c

   * 내용: 정수를 8진수, 10진수, 16진수 중 하나로 입력받아 8진수, 10진수, 16진수 각각 얼마에 해당하는지 출력하는 프로그램 작성 ...

   * 작성자: 최정현

   * 날짜: 2025.3.20

   * 버전: v1.0

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

	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.");
	printf("정수?");

	scanf("%i", &n);

	printf("8진수: %#o\n", n);
	printf("10진수: %d\n", n);
	printf("16진수: %#x\n", n);

	return;
}