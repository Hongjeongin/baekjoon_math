/*
��¥ : 2021-02-09
�̸� : ȫ����
���� : ������ ���� �Ÿ� ���ϱ� 
���� : ���� �׸��� ���� ���������� �̷���� ������ �ִ�.
�׸����� ���� �ٿ� ���� �߾��� �� 1���� �����ؼ� �̿��ϴ� �濡 ���ư��鼭 1�� �����ϴ� ��ȣ�� �ּҷ� �ű� �� �ִ�.
���� N�� �־����� ��, ������ �߾� 1���� N�� ����� �ּ� ������ ���� ������
�� �� �� ���� ���� ����������(���۰� ���� �����Ͽ�)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
���� ���, 13������ 3��, 58������ 5���� ������.
*/

#include <stdio.h>

int honeycomb(int x);

int main(void) {

	int input, count = 0, co = 0;
	int x = 0;

	printf("���ϴ� ���� �Է� : ");
	scanf("%d", &input);

	if (input == 1) {
		printf("%d\n", input);
		return 0;
	}
	else {
		x = honeycomb(input);
	}

	for (; count < x; count++) {
		for (int i = 0; i < (co + 1); i++) {
			count++;
		}
		co++;
	}

	printf("%d(��)�� %d���� ������.\n", input, co + 2);

	return 0;
}

int honeycomb(int x) {

	int result = 0;

	result = (x - 2) / 6;

	return result;
}