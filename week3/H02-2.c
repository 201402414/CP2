#include<stdio.h>

int main() {

	int input, binary, sum = 0, i = 1;
	printf("임의의 정수를 입력하시오 (2진수) : ");
	scanf("%d", &input);


	while (input>0)
	{
		binary = input % 10;  // 입력값을 10으로 나눈 나머지를 받는다.
		sum += binary*i;	  // 최종값에 binary에 i(자리수 2진수니까 1,2,4,8 ....)를 곱한다.
		input = input / 10;   // 입력값에 10으로 나눠 다음을 반복하면서 계산한다.
		i *= 2;				  // 자리수 
	}
	printf("%d", sum);


}