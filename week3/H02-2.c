#include<stdio.h>

int main() {

	int input, binary, sum = 0, i = 1;
	printf("������ ������ �Է��Ͻÿ� (2����) : ");
	scanf("%d", &input);


	while (input>0)
	{
		binary = input % 10;  // �Է°��� 10���� ���� �������� �޴´�.
		sum += binary*i;	  // �������� binary�� i(�ڸ��� 2�����ϱ� 1,2,4,8 ....)�� ���Ѵ�.
		input = input / 10;   // �Է°��� 10���� ���� ������ �ݺ��ϸ鼭 ����Ѵ�.
		i *= 2;				  // �ڸ��� 
	}
	printf("%d", sum);


}