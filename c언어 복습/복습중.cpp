#include <stdio.h>

int main() {
	int sum = 0;
	int i = 1;
	int n; // 아래 오류가 없도록 n은 10을 입력할 것.
	printf("n의 값을 입력해라\n");
	scanf("%d",&n);
	while (i < n) { //while문 while문은 조건에 달하기 까지 계속 반복한다. 조건이 거짓이 되는 순간 while문은 종료된다.
		sum = sum+i;
		i++;
	}
	printf("1부터 %d까지 더한 값은 %d이다.\n",n,sum);

	int j = 11;
	do {
		printf("do-while문 실행 중\n");
	} while (j<n); //do-while문은 조건에 맞지 않더라도 무조건 한번은 실행이 된다. 예를 들어 i가 10이고 n이 9라도
	// do-while문은 실행 중이라는 문장이 한번은 출력이 된다.

	for (i = 0; i < n; i++) { // for문이다. for문도 가운데 조건식이 거짓이 되는 순간 반복을 중단한다.
		printf("n의 숫자만큼 반복하여 출력합니다\n");
	}
	int k = 1;
	while (1) { // while문을 이용한 무한루프이다.
		printf("%d\n",k);
		k++;
		if (k == 10) {
			break; // 이처럼 무한루프여도 조건문을 사용하여 특정 조건이 만족되면 break문을 이용하여 반복문을 종료시킬 수 있다.
		}
	}
	for (int l = 0; l < 10; l++) {
		if (l % 2 != 0) {
			continue; // continue문을 이용하여 조건이 만족되지 않는다면 곧바로 다음 반복으로 넘어가게 할 수 있다.
			// 현재 코드에서는 2로 나누어떨어지지 않는다면 다음 반복으로 넘어가게 하여 짝수만 출력할 수 있게 된다.
		}
		printf("%d\n",l);
	}
}