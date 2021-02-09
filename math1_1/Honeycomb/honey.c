/*
날짜 : 2021-02-09
이름 : 홍정인
제목 : 육각형 벌집 거리 구하기 
설명 : 위의 그림과 같이 육각형으로 이루어진 벌집이 있다.
그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다.
숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서
갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오.
예를 들면, 13까지는 3개, 58까지는 5개를 지난다.
*/

#include <stdio.h>

int honeycomb(int x);

int main(void) {

	int input, count = 0, co = 0;
	int x = 0;

	printf("원하는 숫자 입력 : ");
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

	printf("%d(은)는 %d개를 지난다.\n", input, co + 2);

	return 0;
}

int honeycomb(int x) {

	int result = 0;

	result = (x - 2) / 6;

	return result;
}