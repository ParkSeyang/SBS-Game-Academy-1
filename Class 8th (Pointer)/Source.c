#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 주소연산자(&)란 변수의 주소 값을 반환하는 연산자입니다.

	// int data = 10;

	// printf(" data 변수의 주소 값 : %p\n", &data);

	// 데이터의 주소 값은 해당 데이터가 저장된 메모리
	// 의 시작 주소를 의미하며, 메모리의 공간은 1 byte
	// 의 크기로 나누어 표현합니다.
#pragma endregion

#pragma region scanf 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	// int score = 0;
	
    // 표준 입력 함수는 입력을 수행할 때까지 다음
	// 작업으로 넘어갈 수 없습니다.
	 
	// scanf_s("%d", &score);
	
	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.
	 
	// printf("score 변수의 값 : %d\n", score);
	// 
	// 표준 입력 함수로 데이터를 입력하게 되면
	// 버퍼에 데이터를 보관하였다가 입력하는 순간
	// 버퍼 안의 내용을 프로그램에 전송합니다.

	// scanf 함수 사용의 유의점
	// 1. scanf 함수에서 변수명을 지정할 때는 &를 붙여야 합니다.
	// 변수의 값을 출력할 때는 변수명만 사용하지만, 입력할 때는
	// 변수명 앞에 주소연산자(&)를 붙여야 합니다.

	// 2. scanf 함수에서 사용한 변환 문자와 맞는 형태의 데이터를
	// 입력해야 합니다.
	// scanf 함수는 변환 문자와 입력 형태가 다르면 데이터를 입력하지
	// 못할 수 있습니다. 키보드로 입력하는 데이터는 모두 문자로 처리됩니다.
	// scanf 함수는 변환 문자를 보고 정수로 변환할지 실수로 변환할지 아니면 
	// 그냥 문자열로 입력할지를 판단합니다.
	// 
	// 예시)
	// int a = 0;
	// scanf("%d", &a); O

	// char ch;
	// scanf_s("%d", &ch); X
#pragma endregion

#pragma region 포인터
	// 메모리의 주소 값을 저장할 수 있는 변수입니다.

	// int x = 10; // 변수의 주소값
	// 
	// int * pointer = &x; // 포인터 변수 선언, x의 주소 대입
	// 
	// *pointer = 99; // 포인터로 변수 x에 99 값 대입;
	// 
	// printf("x의 변수의 값 : %d\n", x);
	// printf("x의 주소 값 : %p\n", &x);
	// printf("pointer 변수의 값 : %p\n", pointer);
	// printf("pointer 고유 주소의 값 : %p\n", &pointer);
	// 
	// 
	//  포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	//  포인터 변수에 변수의 주소를 저장하게 되면 해당
	//  변수의 시작 주소를 가리키게 됩니다.
	// 
	// float health = 100.0f;
	// 
	// pointer = &health;
	// 
	// *pointer = 15.5f;
	// 
	// printf("health 변수의 값 : %f\n", health);
	// 
	//  포인터 변수를 저장하기 위해 주소 값을 저장할 변수의
	//  자료형과 포인터 변수의 자료형이 일치해야 합니다.
	// 
	// printf("포인터 변수의 크기 : %d\n", sizeof(pointer));
	// 
	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수
	//  있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는
	//  운영 체제에 따라 크기가 결정됩니다.
	// 
	// 간접 참조 연산자
	// 출처 https://blog.naver.com/pullipes/222736974340

#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	// 범용 포인터는 메모리 주소에 접근해서 값을
	// 변경할 수 없습니다.

	// void* p = NULL;
	// 	
	// char character = 'A';      // 바꿀값 'B';
	// 	int integer = 10;      // 바꿀값 15;
	// float decimal = 5.5f;      // 바꿀값 3.25f;
	// 
	// 
	// p = &character;
	// 
	//  범용 포인터로 변수의 메모리에 접근하려면
	//  범용 포인터가 가리키는 변수의 자료형으로
	//  형 변환을 해주어야 합니다.
	// 
	// *(char*)p = 'B';
	// 
	// printf("범용 포인트 1 : %c\n", character);
	// 
	// p = &integer;
	// 
	// *(int*)p = 15;
	// 
	// printf("범용 포인트 2 : %d\n", integer);
	// 
	// p = &decimal;
	// 
	// *(float*)p = 3.25f;
	// 
	// printf("범용 포인트 3 : %f\n", decimal);


#pragma endregion

#pragma region 상수 지시 포인터

	// int vectorX = 10;
	// int vectorY = 20;
	// 
	// const int* ptr = &vectorX;
	// 
	// printf("ptr 변수가 가리키는 값 : %d\n", *ptr);
	// 
	// *ptr = 99;
	// 
	// ptr = &vectorY;
	// 
	// printf("ptr 변수가 가리키는 값 : %d\n", *ptr);

	// 상수 지시 포인터를 선언하게 되면 포인터 변수가;
	// 가리키고 있는 주소에 존재하는 값을 변경할수
	// 없도록 설정할 수 있습니다.

#pragma endregion

#pragma region 포인터 상수

	// int positionX = 5;
	// int positionY = 0;

	// int* const reference = &positionX;

	// *reference = 10;

	// reference = &positionY;

	// 포인터 상수는 해당 변수의 값을 변경할 수 있지만,
	// 다른 메모리 주소를 저장할 수 없습니다.
#pragma endregion




}