#include <stdio.h>
int main_02(void) {
	//데이터타입 * 변수명 =할당
	char* cp = NULL;
	int* ip = 0; // NULL
	double* dp = 0;

	char c = 'C';
	int i = 10;
	double d = 2.01;

	cp = &c; //c라는 변수가 있는 메모리 주소값
	ip = &i;
	dp = &d;


	printf("char* cp의 크기는 = %d\n", sizeof(cp));
	printf("int* ip의 크기는 = %d\n", sizeof(ip));
	printf("double* dp의 크기는 = %d\n", sizeof(dp));
	printf("\n\n");
	printf("char* cp의 저장된 주소값 = %p / char c의 주소값%p\n", cp, &c);
	printf("int* ip의 저장된 주소값 = %p / int i의 주소값%p\n", ip,&i);
	printf("double* dp의 저장된 주소값 = %p / double d의 주소값%p\n", dp,&d);

	return 0;
}