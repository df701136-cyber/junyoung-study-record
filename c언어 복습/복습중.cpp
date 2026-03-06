#include <stdio.h>  
#define MAX 100 // MAX라는 기호상수를 100으로 정의.


int main() {
	int x = 11; // 정수형 자료형 int
	double y = 2.4; // 실수형 자료형 double
	char z = 'a'; // 문자형 자료형 char

	printf("%d \n",x); // %d는 정수형 자료형을 출력할 때 사용하는 서식 문자.
	printf("%.2lf \n",y); // %lf는 실수형 자료형을 출력할 때 사용하는 서식 문자
	printf("%c \n",z); // %c는 문자형 자료형을 출력할 때 사용하는 서식 문자.

	return 0;
} 

