#include <stdio.h>

int main(void) {
	
	int arr[5] = { 1,2,3,4,5 };
	int* arr_cp = NULL;
	//arr = [�迭�� ���� �ּҰ�];

	printf("%p %p %p %p %p\n", arr, &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%d %d %d %d %d\n", arr, &arr[1], &arr[2], &arr[3], &arr[4]);
	
	//arr�� int�迭�̹Ƿ� int* �� ���� �� �ִ�
	arr_cp = arr;
	for (int i = 0; i < 5; i++)
	{
		//printf("%d\n", arr_cp[i]);
		printf("[�ּ� : %d] = %d\n", arr_cp+i , *(arr_cp + i));
	}
	
	return 0;
}