#include <stdio.h>

int z = 10; // 어디에서든 사용 가능한 전역변수이다.

int main() {
	
	int x; // 사용 범위가 main()함수 내부인 지역변수 x.
	
	while (1) {
		int y =3; // while문 안에서 선언 됐으므로 while문 안에서만 사용 가능한 지역변수이다.
		printf("%d\n",y);
		y++;
		if (y <= 5) {
			break;
		}
		printf("%d",z);
	}
	return 0;
}

