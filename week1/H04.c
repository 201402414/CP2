#include <stdio.h>
#define middle(x,y) (x+y)/2 

void main() {
	
	double x, y = 0;

	printf("실수 2개를 입력 : ");
	scanf("%lf , %lf", &x, &y); // 실수 2개를 받는거니까 lf로 받는다.
	printf("중간 값은 : %.2lf",middle(x,y)); // 중간값 계산하는걸 매크로로 지정후 사용
}