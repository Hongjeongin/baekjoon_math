/*
��¥ : 2021-02-10
�̸� : ȫ����
���� : �м� ã��
���� : �̿� ���� ������ �м����� 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> ��
�� ���� ������� ������ ���ʴ�� 1��, 2��, 3��, 4��, 5��, �� �м���� ����.
X�� �־����� ��, X��° �м��� ���ϴ� ���α׷�
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int i = 1, j = 1, count = 1, exit = 1;
	int num;

	printf("�� ��° �м��� ã���ðڽ��ϱ� : ");
	scanf("%d", &num);
	if (num == 1) {

	}
	else
	while (count != num) {
		j++; count++;
		for (; j > 1; i++, j--) {
			if (count == num) {
				break;
			}
			count++;
		}
		if (count == num) {
			break;
		}

		i++; count++;
		for (; i > 1; i--, j++) {
			if (count == num) {
				exit = 0;
				break;
			}
			count++;
		}
		if (count == num) {
			break;
		}
	}

	printf("%d ��° �м��� %d/%d �Դϴ�.\n", num, i, j);

	return 0;
}