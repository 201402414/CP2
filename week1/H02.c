#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
void main()
{
	char str; //char형을 받기위한 변수 선언
	int a8, a10, a16; // 8진수,10진수 16진수 순서대로 변수선언
	puts("문자를 입력하시오 : ");
	scanf("%c", &str); // 사용자가 입력한 char형을 받기위해 scanf를 사용

	printf("8진수 : %o        10진수 : %d        16진수 : %x \n", str, str, str);
	// char 형을 정수형인 10,16,8진수인 %d,%x %o로 불러오면 아스키 코드로 변환된다.

	puts("해당 아스키 코드를 순서대로 입력해서 맞는지 확인");
	scanf("%o , %d , %x",&a8,&a10,&a16); //사용자가 다시 입력한 10진수를 입력받아 각각 8,10,16,진수로 변형
	printf("%c,%c,%c",a8,a10,a16);
}