#include <stdio.h>
#include <ctype.h>
void main() {
	char input[999]; // 문자를 받기위해 배열을 만들었다.
	printf("문자를 입력하시오 :");
	gets(input); //문자를 입력한다.
	printf("%d", aaa(input, 999));
}
int aaa(char input[], int size) {
	for (int i = 0; i < size; i++) {
		if ((input[i] >= 33 && input[i] <= 47) || (input[i] >= 58 && input[i] <= 64) || (input[i] >= 92 && input[i] <= 96) || input[i] == 32) {  // 배열안에 입력된 문자중에 특수문자나 공백이 있으면 0반환
			return 0;
		}
	}
	if (isdigit(input[0]) != 0) {
		return 0; // isdigit은 숫자가 아닐경우 0을 반환하므로 0이 아닐경우엔 숫자라는 말이다. 따라서 !=0 일때 숫자라고 판단하였다.
	}
	else if (input[5] == NULL) {
		if ((input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't') ||
			(input[0] == 's' && input[1] == 'h' && input[2] == 'o' && input[3] == 'r' && input[4] == 't')) {
			return 0;
		}
	}

	else { return 1; }
}