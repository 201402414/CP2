#include <stdio.h>
#include <ctype.h>
void main() {
	char input[999]; // ���ڸ� �ޱ����� �迭�� �������.
	printf("���ڸ� �Է��Ͻÿ� :");
	gets(input); //���ڸ� �Է��Ѵ�.
	printf("%d", aaa(input, 999));
}
int aaa(char input[], int size) {
	for (int i = 0; i < size; i++) {
		if ((input[i] >= 33 && input[i] <= 47) || (input[i] >= 58 && input[i] <= 64) || (input[i] >= 92 && input[i] <= 96) || input[i] == 32) {  // �迭�ȿ� �Էµ� �����߿� Ư�����ڳ� ������ ������ 0��ȯ
			return 0;
		}
	}
	if (isdigit(input[0]) != 0) {
		return 0; // isdigit�� ���ڰ� �ƴҰ�� 0�� ��ȯ�ϹǷ� 0�� �ƴҰ�쿣 ���ڶ�� ���̴�. ���� !=0 �϶� ���ڶ�� �Ǵ��Ͽ���.
	}
	else if (input[5] == NULL) {
		if ((input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't') ||
			(input[0] == 's' && input[1] == 'h' && input[2] == 'o' && input[3] == 'r' && input[4] == 't')) {
			return 0;
		}
	}

	else { return 1; }
}