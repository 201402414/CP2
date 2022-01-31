#include <stdio.h>
#include <stdlib.h>
// 프로젝트 속성 디버깅 명령인수를 src1.txt srx2.txt result.txt로 입력하였다.
void main(int argc, char *argv[]) {
	FILE *fp1, *fp2, *fp3 = NULL;
	char txt[50];  // 문자열 변수 크기를 50으로 잡음
	if ((fp1 = fopen(argv[1], "r")) == NULL) {  // src1을 읽기로
		printf("원본 파일이 열리지 않습니다.\n");
		exit(1);
	}
	if ((fp2 = fopen(argv[2], "r")) == NULL) {  // src2도 읽기로
		printf("원본 파일이 열리지 않습니다.\n");
		exit(1);
	}
	if ((fp3 = fopen(argv[3], "a")) == NULL) {  //  result는 추가모드
		printf("원본 파일이 열리지 않습니다.\n");
		exit(1);
	}
	while (!feof(fp1)) {
		fgets(txt, 50, fp1);   //src1 의 내용을 result에 넣었다.
		fputs(txt, fp3);
	}
	while (!feof(fp2)) {
		fgets(txt, 50, fp2);   //src2 의 내용도 result에 추가로 넣었다.
		fputs(txt, fp3);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}

