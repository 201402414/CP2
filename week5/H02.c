#include <stdio.h> 
#include <string.h>
void main()
{
	char input[11]; // 입력받을 배열
	int  count[27]; // 알파벳 카운트할 배열 
	printf("문자 10개를 입력하시오 : ");
	scanf("%s", input);
	strlwr(input); // 대문자 -> 소문자 변경

	for (int i = 0; i < 27; i++) {  // count 배열을 전부 0으로 초기화
		count[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		if (input[i] >= 'a' && input[i] <= 'z')
			count[(int)input[i] - 97]++;  // 아스키 코드를 이용하여 a를 count[0], b를 count[1] .... 이렇게 생각하고 등록
	}


	for (int i = 0; i < 26; i++) {
		printf("[%c] = %d\n", (char)(i + 97), count[i]); // 알파벳과 갯수를 출력 
	}
}