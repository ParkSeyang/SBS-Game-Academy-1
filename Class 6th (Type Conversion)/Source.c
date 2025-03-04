#include <stdio.h>

#define SIZE 10

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
	// 연산이 이루어지기 전에 사용자가 직접 자료형을
	// 변환하는 과정입니다.

	// int attack = 10;
	// int health = 3;
	// 
	// float damage = (float)attack / health;
	// 
	// printf("damage 변수의 값 : %f\n", damage);

	// 정수형 변수끼리 연산을 수행하게 되면 정수의
	// 결과 값만 가질 수 있습니다.

	// https://velog.io/@limehee/C%EC%96%B8%EC%96%B4-%EC%9E%90%EB%A3%8C%ED%98%95-%EB%B3%80%ED%99%98
#pragma endregion

#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로
	// 정의되고 처리되는 과정입니다.

	// printf("매크로 SIZE의 값 : %d\n", SIZE);

	// 매크로의 경우 자료형이 존재하지 않으므로,
	// 메모리 공간을 가지고 있지 않습니다.
#pragma endregion

#pragma region 예제 사분면
	
	int x = 5;
	int y = 0;

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