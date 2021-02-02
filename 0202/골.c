#include <stdio.h>

int x = 10; //data영역
int y = 20;

int main_1(void) {
	
	int a = 10; //지역변수
				//stack 영역

	int b = 20; //지역변수 Stack
	printf("====STACK====\n");
	printf("a메모리 주소값 %p, 10진수로 %d\n", &a, &a);
	printf("b메모리 주소값 %p, 10진수로 %d\n", &b, &b);
	"\n";
	printf("====DATA====\n");
	printf("x메모리 주소값 %p, 10진수로 %d\n", &x, &x);
	printf("y메모리 주소값 %p, 10진수로 %d\n", &y, &y);
	return 0;
}