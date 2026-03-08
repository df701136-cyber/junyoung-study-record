#include <stdio.h>
#include <stdlib.h> // rand함수를 사용하기 위해 필요한 헤더파일
#include <time.h> // time함수를 사용하기 위해 필요한 헤더파일

int bigger(int x, int y) { // 함수라는 것이다. 반환값이 존재하지 않을 땐 괄호 안에 있는 매개변수를 쓸 필요 없지만 현재는
// x or y 중 더 큰 숫자를 반환해야 하기 때문에 매개변수를 사용한 것이다.
	if (x > y) {
		return x;
	}
	else if (x==y) {
		printf("두 값이 같다.");
	}
	else {
		return y;
	}
}





int main() {
	int big;
	int x,y;
	srand((unsigned)time(NULL)); // rand함수를 쓰기 위한 시드값을 설정하는 함수.
	x = rand() % 100 + 1; // 1~100 사이에서 랜덤한 숫자를 x에 부여한다는 뜻.
	y = rand() % 100 + 1;
	big = bigger(x,y); // 지금은 x,y라는 변수가 들어갔지만 숫자가 들어가도 무방하다.
	printf("가장 큰 숫자는? %d",big);
	return 0;
}

// 이런 직접 함수를 만들어서 사용하는 경우도 있고, 다양한 함수가 존재한다.
// 수학함수도 있다. = floor(),ceil()은 내림,올림 함수이고 fabs()는 절댓값으로 반환해주는 함수. pow()는 제곱을 구하는 함수.
// sqrt()는 제곱근을 구하는 함수. , sin,cos,tan 삼각함수도 존재한다.
// 함수를 사용하는 이유는 소스코드의 중복성을 없애주고, 한번 제작한 함수는 다른 프로그램 제작할 때도 사용할 수 있다.