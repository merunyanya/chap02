/* 파일명: project7.c

 * 내용: 커피 사이즈와 주문 수량을 입력받아서 출력하는 프로그램 작성, 커피 사이즈는 S, T, G 중 하나로 입력받는다

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
	char size;
	int n;

	printf("커피 사이즈(S,T,G)? ");
	scanf("%c %d", &size, &n);
	printf("%c 사이즈 %d잔을 주문합니다.", size, n);
	return;
}