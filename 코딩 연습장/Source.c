#define _CRT_SECURE_NO_WARNINGS
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
//		 arr[].length;
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

#pragma region 변수의 선언과 사용
	// 변수를 선언할때는 사용할 자료형(문자는 char... 정수는 int... 실수는 float,double...)을 정의하고 
	// 그후에 변수의 명을 지어주면된다. 예시로 int bot, int a, float Tex 등등..
	// '='를 수학에서는같다라는 표현이지만 
	// 프로그램에서는 '='대입연산자라고한다.
	// 대입연산자(=)는 오른쪽 값을 왼쪽에 저장(할당)한다는 의미이다.

	//예제를 만들어서 학습해보기.
// int main(void)
// {
// 	int a;	      // int 형 변수 a선언
// 	int b, c;	  // 2개의 int형 변수 b, c 를 동시에 선언
// 	double da;	  // double형 변수 da 선언
// 	char ch;	  // char형 변수 ch 선언
// 
// 	a = 10;	      // int형 변수 a에 정수 10을 대입
// 	b = a;		  // int형 변수 b에 변수 a의 값을 대입
// 	c = a + 20;	  // int형 변수 c에 변수 a의 값과 정수 20을 더한 값대입
// 	da = 3.5f;	  // double형 변수 da에 실수 3.5 대입
// 	ch = 'A';	  // char형 변수 ch에 문자 'A' 대입
// 
// 	printf("변수 a의 값 : %d\n", a);
// 	printf("변수 b의 값 : %d\n", b);
// 	printf("변수 c의 값 : %d\n", c);
// 	printf("변수 da의 값 : %.1lf\n", da);
// 	printf("변수 ch의 값 : %c\n", ch);
// 
// return 0;
// }

#pragma endregion

#pragma region char형 변수의 사용
	//#include <stdio.h>

// int main(void)
// {
// 	char ch1 = 'A';  // 문자로 초기화. 저장된 값은 문자의 아스키 코드 값
// 	char ch2 = 65;	 // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화
// 
// 	printf("문자%c의 아스키 코드 값 : %d\n", ch1, ch2);
// 	printf("아스키 코드 값이 %d인 문자 : %c\n", ch2, ch1);
// 
// 	return 0;
// }

#pragma region 여러가지 정수형 변수
	//#include<stdio.h>

 // int main(void)
 // {
 // 	short sh = 32767;					//short형 의 최댓값 초기화
 // 	int in = 2147483647;				//int형 의 최댓값 초기화
 // 	long ln = 2147483647;				//long형 의 최댓값 초기화
 // 	long long lln = 123451234512345;	//아주 큰 값 초기화
 // 
 // 	printf("short형 변수 출력 : %d\n", sh);
 // 	printf("int형 변수 출력 : %d\n", in);
 // 	printf("long형 변수 출력 : %ld\n", ln);
 // 	printf("longlong형 변수 출력 : %lld\n", lln);	//long long 형은 lld 로 출력
 // 	
 // 	printf("longlong형의 크기 : %d바이트\n", sizeof(long long));  //자료형의 크기를 알아내는 sizeof 연산자
 // 		//현재 사용하는 컴파일러에서 구현된 자료형의 크기가 궁금하면 sizeof 연산자로 확인할수있다.
 // 		//sizeof는 자료형의 크기를 바이트 단위로 계산해주며 위와 같이 사용하면 된다.
 // 	return 0;
 // }


#pragma endregion

#pragma region unsigned를 잘못 사용한 경우
	// #include <stdio.h>

// int main(void)
// {
// 	unsigned int a;
// 
// 	a = 4294967295;		// 큰 양수 저장
// 	printf("%d\n", a);	// %d로 출력
// 	a = -1;				// 음수 저장
// 	printf("%u\n", a);	// %u로 출력
// 
// 	return 0;
// }
// 명심해야될점. unsigned 자료형을 쓸때는 항상 양수만 저장하고 서식지정자는 %u로 출력한다.
#pragma endregion


#pragma endregion

#pragma region 실수 자료형(유효 숫자 확인)
	// include <stdio.h>

// int main(void)
// {
// 	float ft = 1.234567890123456789;	// 유효 숫자가 많은 값으로 초기화.
// 
// 	double db = 1.234567890123456789;
// 
// 	printf("float형 변수의 값 : %.20f\n", ft);
// 	printf("double형 변수의 값 : %.20lf\n", db);
// 
// 	return 0;
// }

	// 출력값이 초깃값과 다른이유 : 컴퓨터에서 실수를 표현하는 방식이 오차를 갖고있기 때문이다.
	// float 형은 유효 숫자 7자리 double형은 15자리의 범위내의 값을 사용하는게 좋습니다.
	
	// 유효숫자를 계산해가며 프로그래밍하는것이 힘들다면 다음 2가지 방법을 사용하자
	// 1번째 정수형을 기본으로 사용하고 꼭필요한 경우에만 실수형을 사용하자.
	// 2번째 실수형은 유효숫자가 많은 double형을 기본으로 사용합니다.

#pragma endregion

#pragma region char 배열에 문자열 저장
	// include <stdio.h>

// int main(void)
// {
// 	char fruit[20] = "starwberry";				 // char 배열 선언과 문자열 초기화.
// 
// 	printf("딸기 : %s\n", fruit);				 // 배열명으로 저장된 문자열 출력
// 	printf("딸기잼 : %s %s\n", fruit, "jam");	 // 문자열 상수를 직접 %s로 출력
// 
// 	return 0;
// }

// 문자열은 char형을 배열 형태로 만들어 저장하며 %s로 출력된다.

#pragma region char 배열에 문자열 복사
	// include <stdio.h>
	// include <string.h>	// 문자열을 다룰 수 있는 string.h 헤더 파일 포함

// int main(void)
// {
// 	char fruit[20] = "strawberry";	// strawberry로 초기화
// 
// 	printf("%s\n", fruit);			// strawberry로 출력
// 	strcpy(fruit, "banana");		// fruit에 banana 복사 strcpy함수는 string copy의 줄임말로 문자열을 복사한다.
// 	printf("%s\n", fruit);			// banana 출력
// 
// 	return 0;
// 
// }
#pragma endregion


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
