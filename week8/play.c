#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*
a 1 men 2.5
b 2 men 2.0
c 3 women 3.0
d 4 men 4.0
*/
struct student {  //이름과 학번 성별 학점을 저장할 구조체 선언
	char name[10];
	char number[10];
	char gender[10];
	char score[10];
}aaa;

void sort(int a, struct student aaa[]) {
	for (int i = 0; i < a - 1; i++) {			// 내림차순이므로 j번째 점수랑 j+1점수랑 비교해서 j+1이 클경우 j랑 바꿔주었다. 이것을 index의 크기만큼 반복하면 내림차순효과
		for (int j = 0; j < a - 1 - i; j++) {
			if (atof(aaa[j].score) < atof(aaa[j+1].score)) {
				struct student temp = aaa[j];
				aaa[j] = aaa[j + 1];
				aaa[j + 1] = temp;
			}
		}
	}
}
void add(int a, FILE *t, char temp[10], struct student aaa[]) { 
	strcpy(aaa[a].number, temp); // 학생 추가 함수 이름은 이미 받아놨으니까 strcpy로 복사를하고 나머지는 직접 받는다.
	printf("이름: ");
	while (getchar() != '\n');
	gets(aaa[a].name);
	printf("성별 : ");
	gets(aaa[a].gender);
	printf("학점: ");
	gets(aaa[a].score);
}
void print(int a, struct student aaa[]) { // 구조체에 들어있는 학생들의 정보를 출력하는 함수
	for (int i = 0; i <a; i++) {
		printf("%s %s %s %s\n", aaa[i].name, aaa[i].number, aaa[i].gender, aaa[i].score);
	}
}
void n_search(int a, char s[10] , struct student aaa[]){ // 이름으로 검색할때 쓰는 함수
	for (int m = 0; m <= a; m++) {
		if (strcmp(s, aaa[m].name) == 0) {
			printf("%s %s %s %s\n", aaa[m].name, aaa[m].number, aaa[m].gender, aaa[m].score);
		}
	}
}
void change(int a, char s[10], char t[10], struct student aaa[]) { 
	for (int k = 0; k <= a; k++) { // 학점을 변경할때 쓰는 함수 새로운 학점을 받아서 strcpy로 덮어써버렸다.
		if (strcmp(s, aaa[k].number) == 0) {
			strcpy(aaa[k].score, t);
			printf("%s %s %s %s\n", aaa[k].name, aaa[k].number, aaa[k].gender, aaa[k].score);
			_sleep(3000);
			system("cls");
			
		}
	}
}
void dele(int a, char b[10], struct student aaa[]) {
	int temp1;
	for (int m = 0; m <= a; m++) {  
		if (atoi(b) == atoi(aaa[m].number)) { // index의 크기만큼for문을 돌려 삭제하고자 하는 학번에 도달하면 (캐릭터형 배열 형식의 학번을 atoi함수를 써서 숫자로 바꾼후 비교)
			int temp = m;                    
			while (temp < a) { // 배열을 덮어씀으로 제거의 효과를 같는다. 예를들어 1,2,3,4 가 있을때 2를 지우고자 하면 3->2로 4->3으로 덮어쓰게되어 1,3,4가 된다.
				strcpy(aaa[temp].name, aaa[temp + 1].name);
				strcpy(aaa[temp].number, aaa[temp + 1].number);
				strcpy(aaa[temp].gender, aaa[temp + 1].gender);
				strcpy(aaa[temp].score, aaa[temp + 1].score);
				temp++;
			}
		}
		
	}
}
void save(int a,FILE *t, struct student aaa[]) { // 쓰지 않은 함수
	for (int i = 0; i < a; i++) {
		fprintf(t, "%s", aaa[a].name);
		fprintf(t, "%s", aaa[a].number);
		fprintf(t, "%s", aaa[a].gender);
		fprintf(t, "%s", aaa[a].score);
	}
	fclose(t);
}
void main() {
	char fname[] = "asdf.txt";
	char bbb[80];
	FILE *f;
	struct student aaa[99];

	f = fopen("asdf.txt", "r+");
	if (f == NULL) {
		printf("파일 입력 오류!\n");
	}
	for (int i = 0; i < 4; i++) {  // 기존의 txt파일에 4명의 학생의 정보가 들어가 있으므로 for문을 4번 돌렸다.
		fscanf(f, "%s ", &aaa[i].name);
		fscanf(f, "%s ", &aaa[i].number);
		fscanf(f, "%s ", &aaa[i].gender);
		fscanf(f, "%s", &aaa[i].score);
	}
	int select = 0;
	int index = 4;  // 기존에 4명이 있으므로 
	
	

	while (select != 4) {
	menu:
		
		printf("[1.검색] [2.추가 및 변경] [3.삭제] [4.종료] \n" );
		scanf("%d", &select);



		switch (select) {
		case 1:

			system("cls");
			while (1) {
			
				system("cls");
				printf("검색 메뉴 입니다.\n[1.전체 리스트] [2.이름 검색] [3.뒤로가기]\n");
				scanf("%d", &select);
				if (select == 1) {
					system("cls");
					
					printf("-------------- [내림차순 정렬] --------------\n"); 
					
					sort(index, aaa);
					print(index, aaa);
					
					system("pause");
				}
				else if (select == 2) {
					system("cls");
					char search[10];
					printf("-------------- [이름 검색] -------------\n");
					printf("검색할 이름 입력 : ");
					while (getchar() != '\n');
					gets(search);
					n_search(index, search ,aaa);
					
					system("pause");
				}
				else
					break;
			}
			break;
		case 2:

			system("cls");
			while (1) {
				system("cls");
				printf("추가 및 변경 메뉴 입니다.\n[1.학생 추가] [2.학점 변경] [3.뒤로가기]\n");
				scanf("%d", &select);
				if (select == 1) {
					system("cls");
					printf("-------------- [학생 추가] --------------\n");
					char temp[10];
					printf("학번 : ");
					scanf("%s", &temp);
					for (int i = 0; i <= index; i++) {
						if (temp == aaa[i].number) {

							puts("이미 있는 학생입니다.");
							_sleep(3000);  // 타이머
							goto menu;
						}
					}
					add(index,f,temp,aaa);
					index++;
					goto menu;

				}
				else if (select == 2) {
					system("cls");
					char s_num[10];
					char temp[10];
					int t=0;
					printf("-------------- [학점 변경] -------------\n");
					printf("변경할 학생 학번 입력 : ");
					while (getchar() != '\n');
					gets(s_num);
					printf("변경할 학점 입력 : ");
					gets(temp);
					change(index,s_num,temp,aaa);
					goto menu;
				}
				else
					break;
			}
			break;
		case 3:
			system("cls");
			printf("삭제 메뉴 입니다.\n");
			for (int i = 0; i <index; i++) {
				printf("%s %s %s %s\n", aaa[i].name, aaa[i].number, aaa[i].gender, aaa[i].score);
			}
			char del[10];
			printf("삭제할 학번을 입력 : ");

			while (getchar() != '\n');
			gets(del);
			dele(index,del,aaa);
			index--;
			
			break;
		default:
			
			break;
		}
		system("cls");
	}
	fclose(f);

	f = fopen("asdf.txt", "w+");
	if (f == NULL) {
		printf("파일 입력 오류!\n");
	}
	for (int a = 0; a < index; a++) {
		fprintf(f, "%s", aaa[a].name);
		fprintf(f, " %s", aaa[a].number);
		fprintf(f, " %s", aaa[a].gender);
		fprintf(f, " %s", aaa[a].score);
		fprintf(f, "\n");
	}
	fclose(f); // 수정되어있는 구조체들을 다시 txt 파일에 덮어쓰기 위한 작업이다.
}