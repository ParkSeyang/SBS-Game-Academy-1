#include<stdio.h>

//void swap(int left, int right)
//{
//	int temporary = left;
//
//	left = right;
//
//	right = temporary;
//
//}

//int test(int test, int test2)
//{
//	int team = test;
//	test = test2;
//	test2 = team;
//
//	printf("test의 값 ; %d\n", test);
//	printf("test2의 값 ; %d\n", test2);
//	printf("------------------12312321323------");
//
//	return test + test2;
//}

//int main()
//{
//#pragma region Hello World 출력하기
//	// #include<stdio.h>
//
//	// int main()
//	// {
//	// printf("Hello World");
//	// }
//
//#pragma endregion
//
//#pragma region 
//	
//	
//	int a = 10;
//	int b = 20;
//	int returnValue = test(a, b);
//	printf("받은 값 ; %d\n", returnValue);
//
//	int c = 50;
//	int d = 70;
//	test(c, d);
//
//
//	 c = 60;
//	 d = 70;
//	test(c, d);
//
//
//#pragma endregion
//
//	
//}





//void calPlus(int num1, int num2)
//{
//	int plus = num1 + num2;
//	printf("더하기 : %d\n", plus);
//}
//
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	calPlus(num1, num2);
//
//	int num3 = 30;
//	int num4 = 40;
//	calPlus(num3, num4);
//}





//int  multiplication(int num1, int num2)
//{
//
//	printf("곱셈의 값 : %d\n", num1 * num2);
//
//	return num1 * num2;
//}
//
//int main()
//{
//	int num1 = 5;
//	int num2;
//	num2 = 5;
//	
//	int reset = multiplication(num1, num2);
//
//	printf("받은 값 : %d\n", reset);
//
//
//}



//void/* plus(int num1, int num2)
//{
//	printf("덧셈의 값 : %d\n", num1 + num2);
//}
//
//
//
//void calculater(char x, int num1, int num2)
//{
//	switch (x) {
//	case '+':
//		plus(num1, num2);
//		break;
//	case '-':
//		printf("뺄셈의 값 : %d\n", num1 - num2);
//		break;
//	case '*':
//		printf("곱셈의 값 : %d\n", num1 * num2);
//		break;
//	case '/':
//		printf("나눗셈의 값 : %d\n", num1 / num2);
//		break;
//	default:
//		printf("정확한 값을 입력하십시오");
//		break;
//	}
//
//	return num1 * num2;
//}
//
//int main()
//{
//	char x;
//	x = '+';
//	int num1 = 5;
//	int num2;
//	num2 = 5;
//	
//	calculater(x, num1, num2);
//
//	x = '-';
//	calculater(x, num1, num2);
//}*/









//int main()
//{
//	// 별찍는 코드
//	//int i = 0, j = 0;
//
//	////for (i = 0; i < 5; i++)/*
//	//{
//	//	for (j = 0; j <= i; j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}*/
//
//	int line = 5;
//	int star = 1;
//	int space = line - star;
//
//	for (int i = 0; i < line; i++)
//	{
//		for (int k = 0; k < space; k++)
//		{
//			printf(" ");
//		}
//
//		for (int j = 0; j < star; j++)
//		{
//			printf("*");
//		}
//
//		space--;
//		star++;
//		printf("\n");
//	}
//	
//
//
//
//
//	int c, d, e;
//
//	int
//		c
//		, d
//		, e
//		;
//
//	int c;
//	int d;
//	//int e; 2022-11-12 이대리가 빼라고함
//
//}







int main(void)
{
	int n = 2147483647;
	int count = 0;

	//while (n > 0)
	//{
	//	if ((n % 10) == 7)
	//	{
	//		count++;
	//	}
	//	n = n / 10;
	//}
	//printf("7의 개수 : %d\n", count);







	while (n > 0)
	{
		if ((n % 10) == 7)
		{
			count++;
		}
		n = n / 10;
	}
	printf("7의 개수 : %d\n", count);



	/*int findNum = 7;
	int limitValue = 0;

	while (n > limitValue)
	{
		if ((n % 10) == findNum)
		{
			count++;
		}
		n = n / 10;
	}
	printf("7의 개수 : %d\n", count);*/








	/*string s = "abcde";
	s= "abc"
		s = "abdasefafe"
	while (\입력값 != 0)
	{
		
	}


	for (int i = 0; i < 5; i++)
	{

	}*/

	return 0;
}




//function(arr[])
//{
//	for ()
//	{
//
//	}
//}
//
//
//int main()
//{
//	 int array[3];
//
//	 array[0] = 10;
//	 array[1] = 20;
//	 array[2] = 30;
//	 
//
//
//
//
//	 int a = 10;
//	 int b = 20;
//	 int c = 30;
//
//
//	 fruit[] banana apple
//
//		 int arr[] = sdfjas;dfjas
//
//		 function(arr)
//
//
//
//		 arr[].length;
//
//
//
//	 int arr[3] = { a, b, c };
//	 for ()
//	 {
//		 int x = arr[0];
//		 int y = arr[1];
//		 x;
//		 y;
//		 x;
//		 y;
//	
//		 x;
//		 y;
//
//		 arr[0];
//		 arr[0];
//		 arr[0];
//
//		 x
//
//			 arr[0];
//	 }
//
//}

