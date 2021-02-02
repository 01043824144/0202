#include <stdio.h>

int main(void) {
	
	int arr[5] = { 1,2,3,4,5 };
	int* arr_cp = NULL;
	//arr = [배열의 시작 주소값];

	printf("%p %p %p %p %p\n", arr, &arr[1], &arr[2], &arr[3], &arr[4]);
	printf("%d %d %d %d %d\n", arr, &arr[1], &arr[2], &arr[3], &arr[4]);
	
	//arr은 int배열이므로 int* 에 담을 수 있다
	arr_cp = arr;
	for (int i = 0; i < 5; i++)
	{
		//printf("%d\n", arr_cp[i]);
		printf("[주소 : %d] = %d\n", arr_cp+i , *(arr_cp + i));
	}
	
	return 0;
}