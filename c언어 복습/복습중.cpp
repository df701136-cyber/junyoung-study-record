#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5



int sum(int x[],int y[]) { // 배열을 매개변수로 받는 함수. 포인터에서 좀 더 자세하게 설명할 예정.
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum = sum+x[i]+y[i];
	}
	return sum;
}



int main() {
	
	int x[SIZE]; // SIZE 크기만큼을 가진 배열 x 선언.
	for (int i = 0; i < SIZE; i++) { // 배열과 반복문을 이용한 코드
		x[i] = i;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%d\n",x[i]);
	}
	int y[5] = {13,15,33,45,22}; // 이렇게 선언하고 초기화할 수도 있음.
	for (int i = 0; i < SIZE; i++) { 
		x[i] = y[i]; // 배열의 복사
	}

	printf("두 배열의 합 = %d\n",sum(x,y)); // 배열을 매개변수로 쓸 때는 []를 붙이지 않고 배열 이름만 작성한다. 포인터에서 좀 더 
	// 자세하게 다룰 예정이다. 일단 알고 있으면 된다.

	int s[3][5]; // 2차원 배열이다. 앞 숫자가 행의 개수, 뒤 숫자가 열의 개수이다. 3행 5열의 배열이 만들어진다.
	
	srand((unsigned)time(NULL));

	for (int i = 0; i < 3; i++) { // 이중 반복문을 이용해서 2차원 배열에 랜덤한 숫자를 넣는다.
		for (int j = 0; j < 5; j++) {
			s[i][j] = rand()%100+1;
		}
	}
	for (int i = 0; i < 3; i++) { // 첫번쨰 반복문에는 행의 개수를
		for (int j = 0; j < 5; j++) { // 두번째 반복문에는 열의 개수가 들어가야 한다.
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	int ss[2][3] = { // 2차원 배열은 반복문 없이 이런 식으로 초기화 할 수 있다.
		{1,2,3},
		{4,5,6}
	};



	return 0;
} 

