#include <stdio.h>

#define CELSIUS(x) 5.0 / 9.0*((x) - 32.0)
#define FAHRENHEIT(x) (9.0/5.0) *(x) + 32.0
void main()
{
	double temp=0;
	puts("�µ��� �Է��Ͻÿ�");
	scanf("%lf", &temp);
	printf("���� �µ��� : %.2lf\n", CELSIUS(temp));  // ��ũ�θ� �̿��� �Էµ� �µ��� ȭ���µ��� ��� ������ ��ȯ �� �Ҽ��� 2��°�ڸ����� ���
	printf("ȭ�� �µ��� : %.2lf", FAHRENHEIT(temp));  // ��ũ�θ� �̿��� �Էµ� �µ��� �����µ��� ��� ȭ���� ��ȯ �� �Ҽ��� 2��°�ڸ����� ���
}