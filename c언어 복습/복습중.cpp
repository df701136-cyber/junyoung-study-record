#include <stdio.h>  


int main() {
	int money;
	int score;

	printf("가지고 있는 money값을 입력하세요.\n");
	scanf("%d", &money);

	if (money >= 0) { // if-else문
		printf("알맞은 입력 \n");
	}
	else
		printf("잘못된 입력 \n");

	if (money >= 10000) { //일반적인 조건문
		printf("rich \n");
	}

	printf("score는 최대가 100점.\n");
	scanf("%d", &score);

	if (score < 0) {
		printf("잘못된 입력\n");
	}
	if (score >= 0) { // 중첩 조건문이자 연속적인 조건문.
		if (score >= 90) {
			printf("A등급\n");
		}
		else if (90 > score && score >= 70) {
			printf("B등급\n");
		}
		else if (70 > score && score >= 50) {
			printf("C등급\n");
		}
		else if (50 > score && score >= 30) {
			printf("D등급\n");
		}
		else if (30 > score && score >= 0) {
			printf("F등급\n");
		}
	}

	switch (score) { // switch문이다. 하나의 변수에 대해서 특정한 값이 나올 때마다 다른 행동을 하도록 하는 조건문이다.
	case 100:
		printf("만점!\n");
		break; // break문은 즉시 switch문을 빠져나가게 하는 역할을 한다.
	case 0:
		printf("재시험!\n");
		break;
	default: // 이외에 다른 값들은 모두 이곳으로 오게 되어 default문이 실행된다.
		break;
	}

	return 0;
}