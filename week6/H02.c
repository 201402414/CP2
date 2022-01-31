#include<stdio.h>
#include<string.h>
struct book {  // 서적이름 등록일자 저자 출판사 대여여부 를 가진 구조체선언
	char title[50];
	char date[12];
	char author[20];
	char publisher[50];
	char isExist[20]; 
}bbb;

void main() {
	int num = 0, num2, temp;
	char s_title[50];
	char search[50];
	char del[50];
	char s[2];
	struct book bbb[2] = { // ppt에 있는 기존 2개의 서적을 입력
		{ "보노보노처럼 살다니 다행이야","2017-04-06","김선회","놀","Y" },
		{ "Good Night Stories for Rabel Girls", "2017-03-02", "Elena Favilli", "Penguin Books Ltd", "N" }
	};
	int index = 1;
	int is1 = 2;
	int is2 = 0;
	while (1) {
	menu:
		puts("도서관 제출 프로그램입니다.");
		puts("메뉴를 선택해주세요");
		puts("0 >> 서적 검색");
		puts("1 >> 신규 서적 등록");
		puts("2 >> 등록 서적 제거");

		scanf("%d", &num);
		switch (num) {
		case 0:			//서적 검색으로 들어왔을때
			puts("1 >> 전체 서적 검색");
			puts("2 >> 특정 서적 검색");
			puts("3 >> 처음으로");
			while (1) {

				scanf("%d", &num2);
				switch (num2) {		 
				case 1:		// 전체 서적 검색
					for (int i = 0; i <= index; i++) {
						printf("서적이름 :%s\n", bbb[i].title);
						printf("등록일자 : %s\n", bbb[i].date);
						printf("저자 : %s\n", bbb[i].author);						printf("출판사 : %s\n", bbb[i].publisher);
						printf("대여여부 : %s\n", bbb[i].isExist);
						puts("");
					}
					goto menu;
					break;

				case 2:	// 특정서적 검색
					while (getchar() != '\n');
					puts("찾으려고 하시는 서적이름을 쓰세요:");
					gets(search);
					for (int i = 0; i <= index; i++) {	
						if (strcmp(search, bbb[i].title) == 0) {
							printf("서적이름 : %s\n", bbb[i].title);
							printf("등록일자 : %s\n", bbb[i].date);
							printf("저자 : %s\n", bbb[i].author);
							printf("출판사 : %s\n", bbb[i].publisher);
							printf("대여여부 : %s\n", bbb[i].isExist);
							printf("\n");
							goto menu;
						}
					}

					if (search == bbb[is2].title) {	
						is2++;		 // 서적이 존재하면 is2 증가
					}
					if (is2 == 0) { // is2가 0이면 서적이 존재하지 않는것
						puts("존재하지 않습니다.");
						puts(" ");
						goto menu;
					}
					break;
				case 3:
					goto menu;
				default:
					puts("잘못입력!");
					break;
				}
			}
			break;
		case 1: // 신규 서적 등록
			while (getchar() != '\n');	// 입력을 못받고 다음으로 넘어가길래 구글링해서 찾음
			printf("서적이름:");
			gets(s_title);
			for (int i = 0; i <= index; i++) { // 제목이 같은것이 있으면 중복표기
				if (strcmp(s_title, bbb[i].title) == 0) {
					puts("중복된 서적입니다.");
					goto menu;
				}
			}
			index++;  // 등록하면 index 증가
			strcpy(bbb[index].title, s_title);
			printf("등록일자: ");
			gets(bbb[index].date);
			printf("저자: ");
			gets(bbb[index].author);
			printf("출판사: ");
			gets(bbb[index].publisher);
			printf("대여여부: ");
			gets(bbb[index].isExist);

			break;
		case 2: { // 삭제
			int temp;
			char isdel;
			gets(del);
			puts("서적의 이름을 입력:");
			gets(del);
			for (int m = 0; m <= index; m++) {
				if (strcmp(del, bbb[m].title) == 0) {
					temp = m;
					printf("서적이름 : %s\n", bbb[temp].title);
					printf("등록일자 : %s\n", bbb[temp].date);
					printf("저자 : %s\n", bbb[temp].author);
					printf("출판사 : %s\n", bbb[temp].publisher);
					printf("대여여부 : %s\n", bbb[temp].isExist);
					printf("\n");
					break;
				}
			}
			printf("삭제하시겠습니까? (y / n)\n");
			scanf("%c", &isdel);
			if (isdel == 'y') { //지울때
				if (strcmp("y", bbb[temp].isExist) == 0) {	//대여중일때 예외처리
					printf("대여중이여서 삭제할 수 없습니다.\n");
				}
				else {
					while (temp < index) { // 배열을 덮어씀으로 제거의 효과를 같는다.
						strcpy(bbb[temp].title, bbb[temp + 1].title);
						strcpy(bbb[temp].date, bbb[temp + 1].date);
						strcpy(bbb[temp].author, bbb[temp + 1].author);
						strcpy(bbb[temp].publisher, bbb[temp + 1].publisher);
						strcpy(bbb[temp].isExist, bbb[temp + 1].isExist);
						temp++;
					}
					index--; // 삭제했으므로 index 감소
				}
			}
			if (isdel == 'n') {
				break;
			}
			break;
		}
		default:
			puts("잘못입력하셨습니다.");
			break;
		}

	}
}