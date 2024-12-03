#include<stdio.h>
#pragma region 우성이랑 함수 복습한내용(2024.11.28)
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

//void plus(int num1, int num2)
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
// }
#pragma endregion

#pragma region 별찍기 및 함수 내용 쪼개는법 설명(2024.11.28)
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

// int main(void) // 예제 int n 의 정수값 안에서 7의개수 세기
// {
// 	int n = 2147483647;
// 	int count = 0;
// 
// 	while (n > 0)
// 	{
// 		if ((n % 10) == 7)
// 		{
// 			count++;
// 		}
// 		n = n / 10;
// 	}
// 	printf("7의 개수 : %d\n", count);


// 우성이가 쪼개서 풀어낸 예제
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

	// return 0;
	//}




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
#pragma endregion

#pragma region Be happy! 출력하기(printf 사용하는법 1-1)
// #include<stdio.h>
// int main(void)
// {
// 	printf("Be happy!");
// 	
// 	return 0;
// }
#pragma region Be happy!를 exe 파일로 실행하기
// #include<stdio.h>
// #include<stdlib.h>

// int main(void)
// {
// 	printf("Be happy!");
// 	system("pause");
// 
// 	return 0;
// }
#pragma endregion

#pragma region (10)과(20)을 더하는 프로그램 예제	
/*int main(void) 
	{
		10 + 20;

		return 0;
	}*/

#pragma endregion

#pragma region Be happy! My freind 출력하기(printf 사용하는법 1-2)
// #include<stdio.h>

// int main(void)
// {
// 	printf("Be happy");
// 	printf("My freind");
// 
// 	return 0;
// }

#pragma endregion

#pragma region 제어문자를 이용한 문자열 정렬
	// #include<stdio.h>

// int main(void)
// {
// 	printf("Be happy\n");
// 
// 	printf("12345678901234567890\n");
// 
// 	printf("My\tfreind\n");
// 
// 	printf("goot\bd\tchance\n");
// 
// 	printf("cow\rW\a\n");
// 
// 		return 0;
// }
	// 제어문자에는 다음과 같이 사용됩니다.(이동시에 이동하는곳에 문자가 있을시에 이동된 문자로 덮어 씌워짐)
	// \n : 다음줄로 이동 \b 한 칸 왼쪽으로 이동 
	// /r : 맨앞으로 이동 \a : 벨소리

#pragma endregion

#pragma region 정수와 실수의 출력 
	//#include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", 10);
// 	printf("%lf\n", 3.4);
// 	printf("%.1lf\n", 3.45);
// 	printf("%.10lf\n", 3.4);
// 
// 	printf("%d와 %d의 합은 %d입니다. \n", 10, 20, 10 + 20);
// 	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
// 
// 	return 0;
// 
// // 변환문자 or 서식지정자라고하며 %c는 문자 %d는 정수 %f 또는 %lf 는 실수를 의미합니다.
// // %lf로 실수를 출력하면 소수점 이하 여섯째 자리 까지 출력됩니다.
// // 또한 %.1lf 같은경우 소수점이하의 첫째 자리까지 출력이되고 둘째부터는 반올림이 들어갑니다
// // 이때 소수점의 자릿수를 바꾸려면 %와 lf 사이에 소수점을 찍고 자릿수를 지정해야합니다.
// }

#pragma endregion

#pragma region 예제 풀기
// int main(void)
// {
// 	/*
// 	printf("Hello World!\n);
// 	*/
// 	printf("Be\rHappy!\nBaby");
// 
// 		return 0;
// }

 // 답 Happy!
	// baby 가나온다.
#pragma endregion

#pragma endregion

#pragma region 상수와 데이터 표현방법
	// 상수(constant)란? 변하지 않는 값을 말합니다.
	// 예시) 태어난 시간, 태어난 장소, 유전자배열등등...

#pragma region (3)가지 진법의 정수와 상수
	// include <stdio.h>
	 
// int main(void)
// {
// 	printf("%d\n", 12); // 10진수 정수 상수 출력
// 	printf("%d\n", 014); // 8진수 정수 상수 출력
// 	printf("%d\n", 0xc); // 16진수 정수 상수 출력
// 
// 		return 0;
//  10진수를 8진수나 16진수로 출력하는방법
//	8진수로 출력할려면 %o, 16진수 소문자로 출력하려면 %x, 대문자로 출력하려면 %X를
//	사용하면 됩니다.
//  Ex) 
//	printf("%o\n", 12);
//	printf("%x\n", 12);
//	printf("%X\n", 12);
// 
// }

#pragma region 지수 형태의 실수 상수
	//#include <stdio.h>

// int main(void)
// {
// 	printf("%.1lf\n", 1e6);         // 지수 형태의 실수를 소수점 형태로 출력
// 	printf("%.7lf\n", 3.14e-5);	    // 소수점 이하 일곱째 자리까지 출력
// 	printf("%le\n", 0.0000314);		// 소수점 형태의 실수를 지수 형태로 출력
// 	printf("%.2le\n", 0.0000314);	// 지수 형태로 소수점이하 둘째 자리까지 출력
// 
// 	return 0;
// }

#pragma endregion

#pragma region 문자와 문자열 데이터의 출력
	// #include <stdio.h>

// int main(void)
// {
// 	printf("%c\n", 'A');	 // 문자 상수 출력
// 	printf("%s\n", "A");	 // 문자열 상수 출력
// 	printf("%c은 %s 입니다.\n", '1', "first");	// 문자(%c) 와 문자열(%s)을 함께 출력
// 
// 	return 0;
// }


#pragma endregion


#pragma endregion


#pragma endregion

#pragma region 

#pragma endregion

#pragma region if문 이해하기

// void main()
// {
// 	int art = 'A';
// 
// 	if (art == 'B')
// 	{
// 		printf("당신의 학점은 B입니다.\n");
// 	}
// 	else if (art == 'A')
// 	{
// 		printf("당신의학점은 A입니다.\n");
// 
// 	}
// 	else
// 	{
// 		printf("당신의 학점을 알수가 없습니다.\n");
// 	}
// }

#pragma endregion


#pragma region switch ~ case 문 활용
// int main(void)
// {
// 	int rank = 2, m = 0;
// 
// 	switch (rank)
// 	{
// 	case 1:
// 		m = 300;
// 		break;
// 		
// 	case 2:
// 			m = 200;
// 			break;
// 	case 3:
// 		m = 100;
// 		break;
// 	default:
// 		m = 10;
// 		break;
// 	}
// 	printf("m: %d\n", m);
// 
// 	return 0;
// }
#pragma endregion

#pragma region 

#pragma endregion

