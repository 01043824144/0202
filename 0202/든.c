#include <stdio.h>
int main_02(void) {
	//������Ÿ�� * ������ =�Ҵ�
	char* cp = NULL;
	int* ip = 0; // NULL
	double* dp = 0;

	char c = 'C';
	int i = 10;
	double d = 2.01;

	cp = &c; //c��� ������ �ִ� �޸� �ּҰ�
	ip = &i;
	dp = &d;


	printf("char* cp�� ũ��� = %d\n", sizeof(cp));
	printf("int* ip�� ũ��� = %d\n", sizeof(ip));
	printf("double* dp�� ũ��� = %d\n", sizeof(dp));
	printf("\n\n");
	printf("char* cp�� ����� �ּҰ� = %p / char c�� �ּҰ�%p\n", cp, &c);
	printf("int* ip�� ����� �ּҰ� = %p / int i�� �ּҰ�%p\n", ip,&i);
	printf("double* dp�� ����� �ּҰ� = %p / double d�� �ּҰ�%p\n", dp,&d);

	return 0;
}