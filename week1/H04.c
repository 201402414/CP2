#include <stdio.h>
#define middle(x,y) (x+y)/2 

void main() {
	
	double x, y = 0;

	printf("�Ǽ� 2���� �Է� : ");
	scanf("%lf , %lf", &x, &y); // �Ǽ� 2���� �޴°Ŵϱ� lf�� �޴´�.
	printf("�߰� ���� : %.2lf",middle(x,y)); // �߰��� ����ϴ°� ��ũ�η� ������ ���
}