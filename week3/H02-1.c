#include<stdio.h>

int main() {

	int input, binary, sum = 0, i = 1;
	printf("임의의 정수를 입력하시오(10진수) : ");
	scanf("%d", &input);


	while (input>0)
	{
		binary = input % 2;   // binary에 입력값을 2로 나눈 나머지를 넣는다. 
		sum = sum + binary*i; // 최종 출력될 sum 에 binary에 i(자리수 10진수니까 1,10,100,1000,10000 ....)를 곱한다.
		input = input / 2;    // 입력값을 2로 나눠 나머지 자리수도 구한다.
		i *= 10;			  // 자리수를 잡기위한 변수
	}
	printf("%d", sum);


}