#include <stdio.h>

void main() {
	double input, f;
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf("%lf", &input); // �Ǽ��� ������ �޴´�.
	printf("integer : %d\n", (int)input);     //�Ǽ����� ���������� �ٲٸ� �����κи� ��µȴ�.
	printf("float : %lf", input-(int)input);  // �Ǽ������� �����κ��� ���ָ� �Ǽ��ΰ� ���´�.
}