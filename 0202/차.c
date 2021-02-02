#include <stdio.h>
int main_03(void) {
	//+&c	0x006ff89b  <문자열에 잘못된 문자가 있습니다.>	char *

	char c = 'A';
	char* cp = NULL;

	cp = &c;

	printf("%p %p %p\n", &c, cp, &cp);
	
	//--역참조연산(*)
	cp = 'D';
	printf("%c %c\n", c, *cp);



	
	return 0;
}