#include <stdio.h> 
#include <string.h>
void main()
{
	char input[11]; // �Է¹��� �迭
	int  count[27]; // ���ĺ� ī��Ʈ�� �迭 
	printf("���� 10���� �Է��Ͻÿ� : ");
	scanf("%s", input);
	strlwr(input); // �빮�� -> �ҹ��� ����

	for (int i = 0; i < 27; i++) {  // count �迭�� ���� 0���� �ʱ�ȭ
		count[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		if (input[i] >= 'a' && input[i] <= 'z')
			count[(int)input[i] - 97]++;  // �ƽ�Ű �ڵ带 �̿��Ͽ� a�� count[0], b�� count[1] .... �̷��� �����ϰ� ���
	}


	for (int i = 0; i < 26; i++) {
		printf("[%c] = %d\n", (char)(i + 97), count[i]); // ���ĺ��� ������ ��� 
	}
}