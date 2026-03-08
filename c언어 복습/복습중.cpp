#include <stdio.h>

//n에 5를 입력했다고 가정하고 재귀함수에 대해서 설명하겠다.
//fatorial(5)가 호출이 되면 n이 5이므로 return값이 5*factorial(4)가 된다. 하지만 우리는 factorial(4)가 무엇인지 모른다.
// 그래서 컴퓨터는 factorial(4)를 계산하기 위해서 fatorial(4)를 호출한다. 이것이 n값이 1이 될 때까지 반복한다. 결국 2*factorial(1)
//에 다다른다. fatorial(1)은 n이 1이므로 rreturn값이 1이 된다. 따라서 fatorial(2)는 2가 되고 fatorial(2)까지 알았으므로 
// 다시 위로 올라가서 똑같은 방식으로 계산이 된다. 결국 마지막에 fatorial(5)의 return값은 120이 된다.
int factorial(int n) { // 순환호출을 이용한 재귀함수이다.
	printf("factorial(%d)\n",n);

	if(n<=1) // 이 조건 덕분에 n이 1이 되면 faoctorial(1)값을 알게 되어 다시 위로 올라가면서 계산을 하게 되어 값을 구할 수 있다.
		return 1;
	else
		return n*factorial(n-1);
}

int main() {
	
	int n;
	scanf("%d",&n);
	printf("%d!은 %d입니다.",n,factorial(n));
	return 0;
}

// 순환 알고리즘은 자기 자신을 호출하는 부분과 순환 호출을 멈추는 부분으로 구성된다. 만약 순환 호출을 멈추는 부분이 없다면 시스템 스택을
// 다 사용할 때까지 순환적으로 호출하다가 결국 에러를 내면서 멈출 것이다.
// int x(int n){
//     if(n<=3) return 3; <- 순환을 멈추는 부분
//     else return n*x(n-1); <- 순환호출을 하는 부분
// } 이렇게 구성된 것을 순환 알고리즘이라고 한다. 

