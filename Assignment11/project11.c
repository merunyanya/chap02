  /* 파일명: project11.c

* 내용 : 원주율 파이 값이 3.14...라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램을 작성하시오...

* 작성자 : 최정현

* 날짜 : 2025.3.20

* 버전 : v1.0

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