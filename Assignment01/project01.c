/* 파일명: project1.c

  * 내용: PA01. 다음과 같이 출력하는 프로그램을 작성, 단, printf 문은 한번만 작성

  * 작성자: 최정현

  * 날짜: 2025.3.20

  * 버전: v1.0

  */

#include <stdio.h>

void Print(void);
int main()
{
    Print();
    return 0;
}

void Print(void)
{
    printf("int main(void)\n{\n        return 0;\n}");

    return;
}