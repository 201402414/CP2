#include<stdio.h>

int main() {
	int input;
	printf("라인 수 입력 : ");
	scanf("%d", &input);
	int input1 = input / 2;
	if (input % 2 == 0) {    // 짝수일 경우와 홀수일 경우 두가지 경우로 생각한다.

		for (int i = 1; i <= input1; i++) {         // 짝수일 경우 실습시간에 했던것과 동일하게 하되
			for (int j = 1; j <= input1 - i; j++) { // 입력받는 값/2 를 하여 (input1)크기를 반으로 줄이고
				printf(" ");						// 나머지 반은 뒤집어서 출력한다.  ex) 4줄 = 2줄+뒤집은2줄
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}											// 뒤집어서 출력할때는 순서만 바꾸면 된다.
		for (int i = input1; i >= 1; i--) {		 // i는 1부터 시작해서 input1까지였다면 뒤집어서 input1부터 1까지 줄여 나가면 된다.
			for (int j = 1; j <= input1 - i; j++) {
				printf(" ");
			}
			for (int j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else {											//홀수일 경우 짝수와 똑같지만 위에세모랑 아래 세모중에 !!하나만!! 한줄 더 출력하면 된다. ex)5줄 = 3줄+뒤집은2줄
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