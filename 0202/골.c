#include <stdio.h>

int x = 10; //data����
int y = 20;

int main_1(void) {
	
	int a = 10; //��������
				//stack ����

	int b = 20; //�������� Stack
	printf("====STACK====\n");
	printf("a�޸� �ּҰ� %p, 10������ %d\n", &a, &a);
	printf("b�޸� �ּҰ� %p, 10������ %d\n", &b, &b);
	"\n";
	printf("====DATA====\n");
	printf("x�޸� �ּҰ� %p, 10������ %d\n", &x, &x);
	printf("y�޸� �ּҰ� %p, 10������ %d\n", &y, &y);
	return 0;
}