#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
void main() {
	char input[6]; // �ټ��ڸ��� ���ڸ� �ޱ����� ũ�Ⱑ 5�� �迭�� �������.

	while (1) {  // a�� 0�� �ƴϸ� �ݺ����� ���ᰡ �ȴ�.
		printf("���ڸ� �Է��Ͻÿ� :");
		scanf("%s", input); //����5���� �Է��Ѵ�.

		if (isdigit(input[0]) != 0) {
			puts("false : �ĺ����� ù ���ڷ� ���ڰ� ���� �� ����");				// ù��°�� ����, Ű���尡 �ĺ����ϰ�� H02-1�� �����ϰ� �Ͽ���. �ٸ� ctype.h�� ����Ͽ����Ƿ� �����ϰ��� isdigit�� ����Ͽ���.
			printf("%s\n", input);												// isdigit�� ���ڰ� �ƴҰ�� 0�� ��ȯ�ϹǷ� 0�� �ƴҰ�쿣 ���ڶ�� ���̴�. ���� !=0 �϶� ���ڶ�� �Ǵ��Ͽ���.
		}
		else if ((input[0] == 'f' && input[1] == 'l' && input[2] == 'o' && input[3] == 'a' && input[4] == 't') ||
			(input[0] == 's' && input[1] == 'h' && input[2] == 'o' && input[3] == 'r' && input[4] == 't')) {
			printf("false : %s �� Ű�����Դϴ�.\n", input);
			printf("%s\n", input);
		}
		else if (1) {
			if ((isalpha(input[0]) == 0) && (isdigit(input[0]) == 0)) {  // isalpha�� ���ĺ��� �ƴҰ�� 0���� ��ȯ�� �ȴ�. <���ĺ��� ���ڰ� �ƴҰ�� Ư�����ڶ�� �Ǻ�> �� ������ �ڵ��� �Ͽ���.
				printf("false : ù��°�� Ư������ �Դϴ�.\n");			 // isalpha �� isdigit�� ���� (and) 0�� �ƴҰ�� ���ڵ� �ƴϰ� ���ĺ��� �ƴϹǷ� Ư�����ڶ�� �Ǻ��Ͽ� ���� �Ͽ���.

			}
			if (isalpha(input[1]) == 0 && isdigit(input[1]) == 0) {
				printf("false : �ι�°�� Ư������ �Դϴ�.\n");

			}
			if (isalpha(input[2]) == 0 && isdigit(input[2]) == 0) {
				printf("false : ����°�� Ư������ �Դϴ�.\n");

			}
			if (isalpha(input[3]) == 0 && isdigit(input[3]) == 0) {
				printf("false : �׹�°�� Ư������ �Դϴ�.\n");

			}
			if (isalpha(input[4]) == 0 && isdigit(input[4]) == 0) {
				printf("false : �ټ���°�� Ư������ �Դϴ�.\n");

			}
			printf("%s\n", input);
		}

		else {
			puts("���� ����\n");
		}
		printf("5�ʵ� ����۵˴ϴ�.");  
		_sleep(5000);  // #include <time.h> �ش��� �Ἥ 5�ʵ��� ����ڰ� Ȯ���� �ð��� �ش�
		system("cls"); // #include <stdlib.h> cmd â�� �ʱ�ȭ�Ѵ�.
}