#include <stdio.h>

void main()
{
	#define PI 3.14  // PI�� 3.14�� �����Ѵ�. 
	
	double area, cir, r; 
	// ���� �ѷ� �������� ���� area, cir, r �� ����

	puts("�������� �Է��ϼ���");
	scanf("%lf",&r);   // �������� �Է� �޴´�.
	area = r * r * PI; // ���� = ������*������ * 3.14(������ PI�� ����)
	cir = 2 * PI * r;  // �ѷ� = 2 * PI * ������
	
	printf("���� = %.2lf , �ѷ� = %.2lf \n" , area, cir);
	//double�� �̹Ƿ� %lf �� �޾Ҵ�.
}