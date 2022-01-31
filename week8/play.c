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
struct student {  //�̸��� �й� ���� ������ ������ ����ü ����
	char name[10];
	char number[10];
	char gender[10];
	char score[10];
}aaa;

void sort(int a, struct student aaa[]) {
	for (int i = 0; i < a - 1; i++) {			// ���������̹Ƿ� j��° ������ j+1������ ���ؼ� j+1�� Ŭ��� j�� �ٲ��־���. �̰��� index�� ũ�⸸ŭ �ݺ��ϸ� ��������ȿ��
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
	strcpy(aaa[a].number, temp); // �л� �߰� �Լ� �̸��� �̹� �޾Ƴ����ϱ� strcpy�� ���縦�ϰ� �������� ���� �޴´�.
	printf("�̸�: ");
	while (getchar() != '\n');
	gets(aaa[a].name);
	printf("���� : ");
	gets(aaa[a].gender);
	printf("����: ");
	gets(aaa[a].score);
}
void print(int a, struct student aaa[]) { // ����ü�� ����ִ� �л����� ������ ����ϴ� �Լ�
	for (int i = 0; i <a; i++) {
		printf("%s %s %s %s\n", aaa[i].name, aaa[i].number, aaa[i].gender, aaa[i].score);
	}
}
void n_search(int a, char s[10] , struct student aaa[]){ // �̸����� �˻��Ҷ� ���� �Լ�
	for (int m = 0; m <= a; m++) {
		if (strcmp(s, aaa[m].name) == 0) {
			printf("%s %s %s %s\n", aaa[m].name, aaa[m].number, aaa[m].gender, aaa[m].score);
		}
	}
}
void change(int a, char s[10], char t[10], struct student aaa[]) { 
	for (int k = 0; k <= a; k++) { // ������ �����Ҷ� ���� �Լ� ���ο� ������ �޾Ƽ� strcpy�� �������ȴ�.
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
		if (atoi(b) == atoi(aaa[m].number)) { // index�� ũ�⸸ŭfor���� ���� �����ϰ��� �ϴ� �й��� �����ϸ� (ĳ������ �迭 ������ �й��� atoi�Լ��� �Ἥ ���ڷ� �ٲ��� ��)
			int temp = m;                    
			while (temp < a) { // �迭�� ������� ������ ȿ���� ���´�. ������� 1,2,3,4 �� ������ 2�� ������� �ϸ� 3->2�� 4->3���� ����ԵǾ� 1,3,4�� �ȴ�.
				strcpy(aaa[temp].name, aaa[temp + 1].name);
				strcpy(aaa[temp].number, aaa[temp + 1].number);
				strcpy(aaa[temp].gender, aaa[temp + 1].gender);
				strcpy(aaa[temp].score, aaa[temp + 1].score);
				temp++;
			}
		}
		
	}
}
void save(int a,FILE *t, struct student aaa[]) { // ���� ���� �Լ�
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
		printf("���� �Է� ����!\n");
	}
	for (int i = 0; i < 4; i++) {  // ������ txt���Ͽ� 4���� �л��� ������ �� �����Ƿ� for���� 4�� ���ȴ�.
		fscanf(f, "%s ", &aaa[i].name);
		fscanf(f, "%s ", &aaa[i].number);
		fscanf(f, "%s ", &aaa[i].gender);
		fscanf(f, "%s", &aaa[i].score);
	}
	int select = 0;
	int index = 4;  // ������ 4���� �����Ƿ� 
	
	

	while (select != 4) {
	menu:
		
		printf("[1.�˻�] [2.�߰� �� ����] [3.����] [4.����] \n" );
		scanf("%d", &select);



		switch (select) {
		case 1:

			system("cls");
			while (1) {
			
				system("cls");
				printf("�˻� �޴� �Դϴ�.\n[1.��ü ����Ʈ] [2.�̸� �˻�] [3.�ڷΰ���]\n");
				scanf("%d", &select);
				if (select == 1) {
					system("cls");
					
					printf("-------------- [�������� ����] --------------\n"); 
					
					sort(index, aaa);
					print(index, aaa);
					
					system("pause");
				}
				else if (select == 2) {
					system("cls");
					char search[10];
					printf("-------------- [�̸� �˻�] -------------\n");
					printf("�˻��� �̸� �Է� : ");
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
				printf("�߰� �� ���� �޴� �Դϴ�.\n[1.�л� �߰�] [2.���� ����] [3.�ڷΰ���]\n");
				scanf("%d", &select);
				if (select == 1) {
					system("cls");
					printf("-------------- [�л� �߰�] --------------\n");
					char temp[10];
					printf("�й� : ");
					scanf("%s", &temp);
					for (int i = 0; i <= index; i++) {
						if (temp == aaa[i].number) {

							puts("�̹� �ִ� �л��Դϴ�.");
							_sleep(3000);  // Ÿ�̸�
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
					printf("-------------- [���� ����] -------------\n");
					printf("������ �л� �й� �Է� : ");
					while (getchar() != '\n');
					gets(s_num);
					printf("������ ���� �Է� : ");
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
			printf("���� �޴� �Դϴ�.\n");
			for (int i = 0; i <index; i++) {
				printf("%s %s %s %s\n", aaa[i].name, aaa[i].number, aaa[i].gender, aaa[i].score);
			}
			char del[10];
			printf("������ �й��� �Է� : ");

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
		printf("���� �Է� ����!\n");
	}
	for (int a = 0; a < index; a++) {
		fprintf(f, "%s", aaa[a].name);
		fprintf(f, " %s", aaa[a].number);
		fprintf(f, " %s", aaa[a].gender);
		fprintf(f, " %s", aaa[a].score);
		fprintf(f, "\n");
	}
	fclose(f); // �����Ǿ��ִ� ����ü���� �ٽ� txt ���Ͽ� ����� ���� �۾��̴�.
}