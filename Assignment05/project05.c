/* 파일명: project5.c

 * 내용: 몸무게를 입력받아서 출력하는 프로그램 작성, 몸무게는 실수로 입력받음, 소수점 이하 2자리까지 출력

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

	float weight;

	printf("몸무게?");
	scanf("%f", &weight);

	printf("입력한 몸무게는 %4.2fKG입니다.", weight);

	return;
}