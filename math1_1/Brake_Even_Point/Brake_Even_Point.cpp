/*
��¥ : 2021-02-08
�̸� : ȫ����
���� : ���ͺб��� üũ
���� : A(= �������), B(= �������), C(= �Ǹź��)�� �־����� ��, ���ͺб����� ���ϴ� ���α׷�
*/

#include <stdio.h>

int main(void) {

	int wedge, var, sell, count = 1;

	printf("������� : ");
	scanf("%d", &wedge);
	printf("������� : ");
	scanf("%d", &var);
	printf("�Ǹź�� : ");
	scanf("%d", &sell);

	if (sell <= var) {
		count = -1;
	}
	else {
		count = wedge / (sell - var) + 1;
	}

	printf("���ͺб����� �߻��ϴ� �Ǹŷ��� %d���� �Դϴ�.\n", count);

	return 0;
}