#include<stdio.h>

int main() {

	int input, binary, sum = 0, i = 1;
	printf("������ ������ �Է��Ͻÿ�(10����) : ");
	scanf("%d", &input);


	while (input>0)
	{
		binary = input % 2;   // binary�� �Է°��� 2�� ���� �������� �ִ´�. 
		sum = sum + binary*i; // ���� ��µ� sum �� binary�� i(�ڸ��� 10�����ϱ� 1,10,100,1000,10000 ....)�� ���Ѵ�.
		input = input / 2;    // �Է°��� 2�� ���� ������ �ڸ����� ���Ѵ�.
		i *= 10;			  // �ڸ����� ������� ����
	}
	printf("%d", sum);


}