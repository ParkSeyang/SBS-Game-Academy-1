#include <stdio.h>

int main()
{
	int data = 10;
	const int constant = 10;

	int result1 = data + data;
	int result2 = 15 - data;
	int result3 = constant * 5;
	int result4 = 15 / 15;
	int result5 = constant % constant;

	printf("result1 의 변수 값 : %d\n", result1);
	printf("result2 의 변수 값 : %d\n", result2);
	printf("result3 의 변수 값 : %d\n", result3);
	printf("result4 의 변수 값 : %d\n", result4);
	printf("result5 의 변수 값 : %d\n", result5);
	return 0;
}