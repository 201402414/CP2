#include <stdio.h>

#define PLUS(x,y) (x) + (y)
#define MINUS(x,y) (x) - (y)
#define MULTI(x,y) (x) * (y)
#define DIVISION(x,y) (double)(x) /(double)(y)
#define REMAINDER(x,y) (x) % (y)

void main() {
	
	int x, y; // 정수형 변수 x,y를 받기위해 변수 선언
	puts("정수형 변수 x,y 를 받아 산술연산을 출력하는 프로그램");
	printf("정수 2개를입력 ex) 1,2 \n");
	
	scanf("%d , %d", &x, &y); // 정수 2개를 입력받는다.

	printf("덧셈 : %d\n", PLUS(x,y));   // 4칙연산과 나머지를 매크로를 이용하여 출력
	printf("뻴셈 : %d\n", MINUS(x, y));
	printf("곱셈 : %d\n", MULTI(x, y));
	printf("나눗셈 : %lf\n", DIVISION(x, y));
	printf("나머지 : %d", REMAINDER(x, y));
}