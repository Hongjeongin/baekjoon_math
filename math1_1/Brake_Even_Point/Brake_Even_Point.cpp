/*
날짜 : 2021-02-08
이름 : 홍정인
제목 : 손익분기점 체크
설명 : A(= 고정비용), B(= 가변비용), C(= 판매비용)가 주어졌을 때, 손익분기점을 구하는 프로그램
*/

#include <stdio.h>

int main(void) {

	int wedge, var, sell, count = 1;

	printf("고정비용 : ");
	scanf("%d", &wedge);
	printf("가변비용 : ");
	scanf("%d", &var);
	printf("판매비용 : ");
	scanf("%d", &sell);

	if (sell <= var) {
		count = -1;
	}
	else {
		count = wedge / (sell - var) + 1;
	}

	printf("손익분기점이 발생하는 판매량은 %d부터 입니다.\n", count);

	return 0;
}