#include<stdio.h>

int main() {
	int input;
	printf("���� �� �Է� : ");
	scanf("%d", &input);
	int input1 = input / 2;
	if (input % 2 == 0) {    // ¦���� ���� Ȧ���� ��� �ΰ��� ���� �����Ѵ�.

		for (int i = 1; i <= input1; i++) {         // ¦���� ��� �ǽ��ð��� �ߴ��Ͱ� �����ϰ� �ϵ�
			for (int j = 1; j <= input1 - i; j++) { // �Է¹޴� ��/2 �� �Ͽ� (input1)ũ�⸦ ������ ���̰�
				printf(" ");						// ������ ���� ����� ����Ѵ�.  ex) 4�� = 2��+������2��
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}											// ����� ����Ҷ��� ������ �ٲٸ� �ȴ�.
		for (int i = input1; i >= 1; i--) {		 // i�� 1���� �����ؼ� input1�������ٸ� ����� input1���� 1���� �ٿ� ������ �ȴ�.
			for (int j = 1; j <= input1 - i; j++) {
				printf(" ");
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else {											//Ȧ���� ��� ¦���� �Ȱ����� ��������� �Ʒ� �����߿� !!�ϳ���!! ���� �� ����ϸ� �ȴ�. ex)5�� = 3��+������2��
		for (int i = 1; i <= input1 + 1; i++) {
			for (int j = 1; j <= input1 + 1 - i; j++) {
				printf(" ");
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		for (int i = input1; i >= 1; i--) {
			for (int j = 1; j <= input1 + 1 - i; j++) {
				printf(" ");
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}