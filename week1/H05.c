#include <stdio.h>

void main()
{
	#define PI 3.14  // PI를 3.14로 정의한다. 
	
	double area, cir, r; 
	// 넓이 둘레 반지름을 각각 area, cir, r 로 정의

	puts("반지름을 입력하세요");
	scanf("%lf",&r);   // 반지름을 입력 받는다.
	area = r * r * PI; // 넓이 = 반지름*반지름 * 3.14(위에서 PI로 정의)
	cir = 2 * PI * r;  // 둘레 = 2 * PI * 반지름
	
	printf("면적 = %.2lf , 둘레 = %.2lf \n" , area, cir);
	//double형 이므로 %lf 로 받았다.
}