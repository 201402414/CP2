#include <stdio.h>

#define PLUS(x,y) (x) + (y)
#define MINUS(x,y) (x) - (y)
#define MULTI(x,y) (x) * (y)
#define DIVISION(x,y) (double)(x) /(double)(y)
#define REMAINDER(x,y) (x) % (y)

void main() {
	
	int x, y; // ������ ���� x,y�� �ޱ����� ���� ����
	puts("������ ���� x,y �� �޾� ��������� ����ϴ� ���α׷�");
	printf("���� 2�����Է� ex) 1,2 \n");
	
	scanf("%d , %d", &x, &y); // ���� 2���� �Է¹޴´�.

	printf("���� : %d\n", PLUS(x,y));   // 4Ģ����� �������� ��ũ�θ� �̿��Ͽ� ���
	printf("�y�� : %d\n", MINUS(x, y));
	printf("���� : %d\n", MULTI(x, y));
	printf("������ : %lf\n", DIVISION(x, y));
	printf("������ : %d", REMAINDER(x, y));
}