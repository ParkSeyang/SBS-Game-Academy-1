#include <stdio.h>

#define SIZE 10
#define printf_num(x) printf("%d\n",x)
#define PRINT_HELLOWORLD printf("Hello World!!\n");\
printf("Nice meet you!");
#define MUL(x,y) printf("%d\n",x*y)

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리
	// 연산이 이루어질 때 기존에 지정했던 자료형을
	// 다른 자료형으로 변환하는 과정입니다.
	 
	// 부가 설명
	// 자료형의 크기 비교
	// 
	// 일반적으로 메모리의 크기가 크면 더 많은 비트 수를 가지기 때문에 더 넓은 표현 범위를 가집니다.
	// 따라서 정수형과 실수형은 각각 아래의 크기 순서를 갖습니다.

	// 정수형: int(4) > short(2) > char(1)
	// 실수형: double(8) > float(4)

	// 정수형과 실수형 모두 4 바이트 크기를 갖는 자료형을 가지고 있습니다.
	// 그렇다면 정수형과 실수형은 같은 선상에 놓였을 때 누가 우선순위를 가질까요 ?

	// 정답은 실수형입니다.
	// 같은 메모리 크기를 갖는다고 할지라도 부동소수점 방식에 의해 실수형이 더 넓은 표현 범위를 갖습니다.
	// 그렇기에 아래의 크기 순서로 정리됩니다.

	// double(8) > float(4) > int(4) > short(2) > char(1)
#pragma region 암묵적 형변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 큰 자료형으로 변환되는 과정입니다.

	//  int integer = 10;
	//  float decimal = 6.5f;
	//  
	//  printf("integer 변수와 decimal 변수를 연산한 결과 : %f\n", integer + decimal);
	//  부가 설명
	// 
	//  1.암묵적 형 변환은 크기가 작은 자료형과 보다 큰 자료형이 만났을 때 자동으로 일어납니다.
	//  2.표현 범위가 작은 데이터에 표현범위가 큰 데이터를
	//  저장하게 되면 암묵적으로 데이터 손실이 발생합니다.
	// 
	//  integer = decimal;
	// 
	//  printf("integer 변수의 값 : %d\n", integer);
	
	// 3.정수형에서 실수형으로 암묵적 형변환은 가능하지만,
	// 실수형에서 정수형으로 암묵적 자료형 변환은 불가능합니다.
	// 4.암묵적 형 변환은 따로 명시하지 않아도 컴파일러가 자동으로 처리하여 줍니다.

#pragma endregion

#pragma region 명시적 형변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을 지정해서
	// 변환하는 과정입니다.

	// int attack = 10;
	// int health = 3;
	 
	// float damage = (float)attack / health;
	 
	// printf("damage 변수의 값 : %f\n", damage);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의
	// 결과 값만 가질 수 있습니다.
	
	// 참고 자료
	// https://velog.io/@limehee/C%EC%96%B8%EC%96%B4-%EC%9E%90%EB%A3%8C%ED%98%95-%EB%B3%80%ED%99%98
#pragma endregion

#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로
	// 정의되고 처리되는 과정입니다.
	// 
	// 예제 1)
	// printf("매크로 SIZE의 값 : %d\n", SIZE);
	// 
	// 매크로의 경우 자료형이 존재하지 않으므로,
	// 메모리 공간을 가지고 있지 않습니다.

	// 예제 2)
	// printf_num(100);
	// 
	// 예제 3)
	// PRINT_HELLOWORLD;
	// 
	// 부가설명
	// 함수형식의 매크로는 한줄밖에 사용이 안되는건가??
	// ​'\' (역슬래시)를 사용하면 매크로의 여러줄을 하나로 묶어서 매크로를 정의 할 수 있습니다.
    // #define 에서는 \(역슬래시)를 줄바꿈으로 인식하기 때문에 
	// 해당 기호를 사용하여 위의 예제3번 같이 코드를 구성할 수 있습니다.
	// 예제 3
	// ex) #define PRINT_HELLOWORLD printf("Hello World!!\n");\
    //     printf("Nice meet you!");
	// 
	// 예제 4)
	// MUL(4,5); 
	// 결과 : 20
	// 
	// MUL(2 + 2, 2 + 3); 
	// 결과 : 9 (2+2*2+3 으로 곱셈이 먼저계산되어서 9라는값이 출력됨.)
	// 
	// 부가설명
	// MUL의 값을 두개 다 4*5 = 20으로 출력할려면 #define MUL(x,y) printf("%d\n",(x)*(y)) 로 바꿔서
	// 각각의 인자에 해당하는 부분에 ( ) 소괄호로 각각의 매개변수를 구분해주면 됩니다.
	// 
	// 참고 자료 
    // https://m.blog.naver.com/pk3152/221559110925
#pragma endregion

#pragma region 예제 사분면
	
	 int x = 0;
	 int y = 0;
	 printf(" x와 y 값을 입력해주십시오 : ");
	 scanf_s("%d %d", &x, &y);


	 if (x > 0 && y > 0)
	 {
	 	printf("제 1 사분면 입니다.\n");
	 }
	 else if (x < 0 && y > 0)
	 {
	 	printf("제 2 사분면 입니다.\n");
	 }
	 else if (x < 0 && y < 0)
	 {
	 	printf("제 3 사분면 입니다.\n");
	 }
	 else if (x > 0 && y < 0)
	 {
	 	printf("제 4 사분면 입니다.\n");
	 }
	 else if (x != 0 && y == 0)
	 { 
	 	printf(" x 절편입니다.\n");
	 }
	 else if (x == 0 && y != 0)
	 {
	 	printf("y 절편입니다.\n");
	 }
	 else
	 { 
	 	printf("원점입니다. \n");
	 }






#pragma endregion


}