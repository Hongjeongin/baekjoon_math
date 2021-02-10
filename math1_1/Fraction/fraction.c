/*
날짜 : 2021-02-10
이름 : 홍정인
제목 : 분수 찾기
설명 : 이와 같이 나열된 분수들을 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 -> …
과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.
X가 주어졌을 때, X번째 분수를 구하는 프로그램
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {

	int i = 1, j = 1, count = 1, exit = 1;
	int num;

	printf("몇 번째 분수를 찾으시겠습니까 : ");
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

	printf("%d 번째 분수는 %d/%d 입니다.\n", num, i, j);

	return 0;
}