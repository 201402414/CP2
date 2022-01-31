#include <stdio.h>
#include <stdlib.h>
// ������Ʈ �Ӽ� ����� ����μ��� src1.txt srx2.txt result.txt�� �Է��Ͽ���.
void main(int argc, char *argv[]) {
	FILE *fp1, *fp2, *fp3 = NULL;
	char txt[50];  // ���ڿ� ���� ũ�⸦ 50���� ����
	if ((fp1 = fopen(argv[1], "r")) == NULL) {  // src1�� �б��
		printf("���� ������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	if ((fp2 = fopen(argv[2], "r")) == NULL) {  // src2�� �б��
		printf("���� ������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	if ((fp3 = fopen(argv[3], "a")) == NULL) {  //  result�� �߰����
		printf("���� ������ ������ �ʽ��ϴ�.\n");
		exit(1);
	}
	while (!feof(fp1)) {
		fgets(txt, 50, fp1);   //src1 �� ������ result�� �־���.
		fputs(txt, fp3);
	}
	while (!feof(fp2)) {
		fgets(txt, 50, fp2);   //src2 �� ���뵵 result�� �߰��� �־���.
		fputs(txt, fp3);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}

