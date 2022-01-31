#include <stdio.h>

void main() {
	double input, f;
	
	printf("실수를 입력하시오 : ");
	scanf("%lf", &input); // 실수형 변수를 받는다.
	printf("integer : %d\n", (int)input);     //실수형을 정수형으로 바꾸면 정수부분만 출력된다.
	printf("float : %lf", input-(int)input);  // 실수형에서 정수부분을 빼주면 실수부가 나온다.
}