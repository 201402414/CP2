#include<stdio.h>
#include<string.h>
struct book {  // �����̸� ������� ���� ���ǻ� �뿩���� �� ���� ����ü����
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
	struct book bbb[2] = { // ppt�� �ִ� ���� 2���� ������ �Է�
		{ "���뺸��ó�� ��ٴ� �����̾�","2017-04-06","�輱ȸ","��","Y" },
		{ "Good Night Stories for Rabel Girls", "2017-03-02", "Elena Favilli", "Penguin Books Ltd", "N" }
	};
	int index = 1;
	int is1 = 2;
	int is2 = 0;
	while (1) {
	menu:
		puts("������ ���� ���α׷��Դϴ�.");
		puts("�޴��� �������ּ���");
		puts("0 >> ���� �˻�");
		puts("1 >> �ű� ���� ���");
		puts("2 >> ��� ���� ����");

		scanf("%d", &num);
		switch (num) {
		case 0:			//���� �˻����� ��������
			puts("1 >> ��ü ���� �˻�");
			puts("2 >> Ư�� ���� �˻�");
			puts("3 >> ó������");
			while (1) {

				scanf("%d", &num2);
				switch (num2) {		 
				case 1:		// ��ü ���� �˻�
					for (int i = 0; i <= index; i++) {
						printf("�����̸� :%s\n", bbb[i].title);
						printf("������� : %s\n", bbb[i].date);
						printf("���� : %s\n", bbb[i].author);						printf("���ǻ� : %s\n", bbb[i].publisher);
						printf("�뿩���� : %s\n", bbb[i].isExist);
						puts("");
					}
					goto menu;
					break;

				case 2:	// Ư������ �˻�
					while (getchar() != '\n');
					puts("ã������ �Ͻô� �����̸��� ������:");
					gets(search);
					for (int i = 0; i <= index; i++) {	
						if (strcmp(search, bbb[i].title) == 0) {
							printf("�����̸� : %s\n", bbb[i].title);
							printf("������� : %s\n", bbb[i].date);
							printf("���� : %s\n", bbb[i].author);
							printf("���ǻ� : %s\n", bbb[i].publisher);
							printf("�뿩���� : %s\n", bbb[i].isExist);
							printf("\n");
							goto menu;
						}
					}

					if (search == bbb[is2].title) {	
						is2++;		 // ������ �����ϸ� is2 ����
					}
					if (is2 == 0) { // is2�� 0�̸� ������ �������� �ʴ°�
						puts("�������� �ʽ��ϴ�.");
						puts(" ");
						goto menu;
					}
					break;
				case 3:
					goto menu;
				default:
					puts("�߸��Է�!");
					break;
				}
			}
			break;
		case 1: // �ű� ���� ���
			while (getchar() != '\n');	// �Է��� ���ް� �������� �Ѿ�淡 ���۸��ؼ� ã��
			printf("�����̸�:");
			gets(s_title);
			for (int i = 0; i <= index; i++) { // ������ �������� ������ �ߺ�ǥ��
				if (strcmp(s_title, bbb[i].title) == 0) {
					puts("�ߺ��� �����Դϴ�.");
					goto menu;
				}
			}
			index++;  // ����ϸ� index ����
			strcpy(bbb[index].title, s_title);
			printf("�������: ");
			gets(bbb[index].date);
			printf("����: ");
			gets(bbb[index].author);
			printf("���ǻ�: ");
			gets(bbb[index].publisher);
			printf("�뿩����: ");
			gets(bbb[index].isExist);

			break;
		case 2: { // ����
			int temp;
			char isdel;
			gets(del);
			puts("������ �̸��� �Է�:");
			gets(del);
			for (int m = 0; m <= index; m++) {
				if (strcmp(del, bbb[m].title) == 0) {
					temp = m;
					printf("�����̸� : %s\n", bbb[temp].title);
					printf("������� : %s\n", bbb[temp].date);
					printf("���� : %s\n", bbb[temp].author);
					printf("���ǻ� : %s\n", bbb[temp].publisher);
					printf("�뿩���� : %s\n", bbb[temp].isExist);
					printf("\n");
					break;
				}
			}
			printf("�����Ͻðڽ��ϱ�? (y / n)\n");
			scanf("%c", &isdel);
			if (isdel == 'y') { //���ﶧ
				if (strcmp("y", bbb[temp].isExist) == 0) {	//�뿩���϶� ����ó��
					printf("�뿩���̿��� ������ �� �����ϴ�.\n");
				}
				else {
					while (temp < index) { // �迭�� ������� ������ ȿ���� ���´�.
						strcpy(bbb[temp].title, bbb[temp + 1].title);
						strcpy(bbb[temp].date, bbb[temp + 1].date);
						strcpy(bbb[temp].author, bbb[temp + 1].author);
						strcpy(bbb[temp].publisher, bbb[temp + 1].publisher);
						strcpy(bbb[temp].isExist, bbb[temp + 1].isExist);
						temp++;
					}
					index--; // ���������Ƿ� index ����
				}
			}
			if (isdel == 'n') {
				break;
			}
			break;
		}
		default:
			puts("�߸��Է��ϼ̽��ϴ�.");
			break;
		}

	}
}