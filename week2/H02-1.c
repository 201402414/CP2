#include <stdio.h>
void main() {
	char input[6];   // �ټ��ڸ��� ���ڸ� �ޱ����� ũ�Ⱑ 5�� �迭�� �������.
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%s",&input); //����5���� �Է��Ѵ�.
	
	int isnum;
	isnum = (int)input[0];     // ������ �ƽ�Ű�ڵ带 �̿��ϱ� ���� ����5���� ���� �ƽ�Ű�ڵ尪���� �ٲ۴�.
	int num1 = (int)input[1];  
	int num2 = (int)input[2]; 
	int num3 = (int)input[3]; 
	int num4 = (int)input[4]; 

	if (isnum>=48 && isnum<=57) { // �ĺ����� ù��°�� ���ڰ� ���� �� ����. ������ ù��°��(intput[0]) �� ���� �ƽ�Ű�ڵ忡���� ���� ������ ���ϸ� ���ڷ� �Ǻ�
		puts("false : �ĺ����� ù ���ڷ� ���ڰ� ���� �� ����");
		printf("%s\n", input);
	}
	else if ((input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't') ||
		(input[0] == 's' && input[1] == 'h' && input[2] == 'o' && input[3] == 'r' && input[4] == 't')) {
		printf("false : %s �� Ű�����Դϴ�.\n", input);
		printf("%s\n", input);
	}
	else if (1) {
		if ((isnum >= 33 && isnum <= 47) || (isnum >= 58 && isnum <= 64) || (isnum >= 92 && isnum <= 96)) { // �ĺ��ڿ��� Ư�����ڰ� ���ü� �����Ƿ� �迭�� ù��°���� ���������� �ƽ�Ű�ڵ忡�� Ư�����ڿ� ���Ұ�� ����
			printf("false : ù��°�� Ư������ �Դϴ�.\n");													// �Է¹��� ���ڿ� 2���̻��� Ư�����ڰ� ���� �� �����Ƿ� else if�� ���ϱ⺸�� if�� ���Ͽ���.
		}
		if ((num1 >= 33 && num1 <= 47) || (num1 >= 58 && num1 <= 64) || (num1 >= 92 && num1 <= 96)) {
			printf("false : �ι�°�� Ư������ �Դϴ�.\n");
		}
		if ((num2 >= 33 && num2 <= 47) || (num2 >= 58 && num2 <= 64) || (num2 >= 92 && num2 <= 96)) {
			printf("false : ����°�� Ư������ �Դϴ�.\n");
		}
		if ((num3 >= 33 && num3 <= 47) || (num3 >= 58 && num3 <= 64) || (num3 >= 92 && num3 <= 96)) {
			printf("false : �׹�°�� Ư������ �Դϴ�.\n");
		}
		if ((num4 >= 33 && num4 <= 47) || (num4 >= 58 && num4 <= 64) || (num4 >= 92 && num4 <= 96)) {
			printf("false : �ټ���°�� Ư������ �Դϴ�.\n");
		}
		printf("%s\n", input);
	}
	else {
		puts("���� ����");
	}
	
}