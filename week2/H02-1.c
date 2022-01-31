#include <stdio.h>
void main() {
	char input[6];   // 다섯자리의 문자를 받기위해 크기가 5인 배열을 만들었다.
	printf("문자를 입력하시오 :");
	scanf("%s",&input); //문자5개를 입력한다.
	
	int isnum;
	isnum = (int)input[0];     // 문제를 아스키코드를 이용하기 위해 문자5개를 전부 아스키코드값으로 바꾼다.
	int num1 = (int)input[1];  
	int num2 = (int)input[2]; 
	int num3 = (int)input[3]; 
	int num4 = (int)input[4]; 

	if (isnum>=48 && isnum<=57) { // 식별자의 첫번째로 숫자가 나올 수 없다. 문자의 첫번째값(intput[0]) 의 값이 아스키코드에서의 숫자 범위에 속하면 숫자로 판별
		puts("false : 식별자의 첫 문자로 숫자가 나올 수 없음");
		printf("%s\n", input);
	}
	else if ((input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't') ||
		(input[0] == 's' && input[1] == 'h' && input[2] == 'o' && input[3] == 'r' && input[4] == 't')) {
		printf("false : %s 은 키워드입니다.\n", input);
		printf("%s\n", input);
	}
	else if (1) {
		if ((isnum >= 33 && isnum <= 47) || (isnum >= 58 && isnum <= 64) || (isnum >= 92 && isnum <= 96)) { // 식별자에는 특수분자가 나올수 없으므로 배열의 첫번째부터 마지막까지 아스키코드에서 특수문자에 속할경우 제외
			printf("false : 첫번째가 특수문자 입니다.\n");													// 입력받은 문자에 2개이상의 특수문자가 나올 수 있으므로 else if로 비교하기보다 if로 비교하였다.
		}
		if ((num1 >= 33 && num1 <= 47) || (num1 >= 58 && num1 <= 64) || (num1 >= 92 && num1 <= 96)) {
			printf("false : 두번째가 특수문자 입니다.\n");
		}
		if ((num2 >= 33 && num2 <= 47) || (num2 >= 58 && num2 <= 64) || (num2 >= 92 && num2 <= 96)) {
			printf("false : 세번째가 특수문자 입니다.\n");
		}
		if ((num3 >= 33 && num3 <= 47) || (num3 >= 58 && num3 <= 64) || (num3 >= 92 && num3 <= 96)) {
			printf("false : 네번째가 특수문자 입니다.\n");
		}
		if ((num4 >= 33 && num4 <= 47) || (num4 >= 58 && num4 <= 64) || (num4 >= 92 && num4 <= 96)) {
			printf("false : 다섯번째가 특수문자 입니다.\n");
		}
		printf("%s\n", input);
	}
	else {
		puts("오류 없음");
	}
	
}