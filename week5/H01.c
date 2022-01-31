#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
void main() {
	char input[6]; // 다섯자리의 문자를 받기위해 크기가 5인 배열을 만들었다.

	while (1) {  // a가 0이 아니면 반복문이 종료가 된다.
		printf("문자를 입력하시오 :");
		scanf("%s", input); //문자5개를 입력한다.

		if (isdigit(input[0]) != 0) {
			puts("false : 식별자의 첫 문자로 숫자가 나올 수 없음");				// 첫번째가 숫자, 키워드가 식별자일경우 H02-1과 동일하게 하였다. 다만 ctype.h를 사용하였으므로 숫자일경우는 isdigit를 사용하였다.
			printf("%s\n", input);												// isdigit은 숫자가 아닐경우 0을 반환하므로 0이 아닐경우엔 숫자라는 말이다. 따라서 !=0 일때 숫자라고 판단하였다.
		}
		else if ((input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't') ||
			(input[0] == 's' && input[1] == 'h' && input[2] == 'o' && input[3] == 'r' && input[4] == 't')) {
			printf("false : %s 은 키워드입니다.\n", input);
			printf("%s\n", input);
		}
		else if (1) {
			if ((isalpha(input[0]) == 0) && (isdigit(input[0]) == 0)) {  // isalpha는 알파벳이 아닐경우 0으로 반환이 된다. <알파벳과 숫자가 아닐경우 특수문자라고 판별> 을 전제로 코딩을 하였다.
				printf("false : 첫번째가 특수문자 입니다.\n");			 // isalpha 와 isdigit이 전부 (and) 0이 아닐경우 숫자도 아니고 알파벳도 아니므로 특수문자라고 판별하여 제외 하였다.

			}
			if (isalpha(input[1]) == 0 && isdigit(input[1]) == 0) {
				printf("false : 두번째가 특수문자 입니다.\n");

			}
			if (isalpha(input[2]) == 0 && isdigit(input[2]) == 0) {
				printf("false : 세번째가 특수문자 입니다.\n");

			}
			if (isalpha(input[3]) == 0 && isdigit(input[3]) == 0) {
				printf("false : 네번째가 특수문자 입니다.\n");

			}
			if (isalpha(input[4]) == 0 && isdigit(input[4]) == 0) {
				printf("false : 다섯번째가 특수문자 입니다.\n");

			}
			printf("%s\n", input);
		}

		else {
			puts("오류 없음\n");
		}
		printf("5초뒤 재시작됩니다.");  
		_sleep(5000);  // #include <time.h> 해더를 써서 5초동안 사용자가 확일할 시간을 준다
		system("cls"); // #include <stdlib.h> cmd 창을 초기화한다.
}