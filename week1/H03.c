#include <stdio.h>

#define CELSIUS(x) 5.0 / 9.0*((x) - 32.0)
#define FAHRENHEIT(x) (9.0/5.0) *(x) + 32.0
void main()
{
	double temp=0;
	puts("온도를 입력하시오");
	scanf("%lf", &temp);
	printf("섭씨 온도는 : %.2lf\n", CELSIUS(temp));  // 매크로를 이용해 입력된 온도가 화씨온도일 경우 섭씨로 변환 후 소수점 2번째자리까지 출력
	printf("화씨 온도는 : %.2lf", FAHRENHEIT(temp));  // 매크로를 이용해 입력된 온도가 섭씨온도일 경우 화씨로 변환 후 소수점 2번째자리까지 출력
}