#include <stdio.h>

#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최대값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.
// int main()
//  {

	 // char character = 128; // 결과 : <- -128 char의 값의범위는 -128 ~ +127이다.
	 // 
	 // printf("character 변수의 값 : %d\n", character);
	  
	 // return 0;
//   }
	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때, 오버플로우가 발생하면 infinity라는 값이 출력됩니다.
#pragma endregion

#pragma region 언더 플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위
	// 를 넘어서 연산을 수행하는 과정입니다.
// int main()
// {

	// char alphabet = -129;  // 결과 : -> +127

	// printf("alphabet 변수의 값 : %d\n", alphabet);
	 
	// return 0;
// }
	// 언더플로우는 부호 없는 자료형에서는 똑같이 발생
	// 하며, 실수일 때 언더플로우가 발생하면 0이라는 값이 출력됩니다.
#pragma endregion

#pragma region 시프트 연산자
	// 비트의 위치를 오른쪽 또는 왼쪽으로 특정한 수만큼
	// 이동시키는 연산자입니다.
// int main()
//	{
	

	 // int x = 10;
	 // int y = 12;
	
	 // printf("x의 값을 2번 왼쪽으로 이동한 결과 : %d\n", x << 2);
	 // x = 10은 이진수로    [0][0][0][0][1][0][1][0] 입니다.
	 //	왼쪽으로 2번 이동하면[0][0][1][0][1][0][0][0] 가 됩니다.
	 // 이는 2배씩 2번 곱한 값입니다.
	 // 결과 : 40
//	}
	 // printf("y의 값을 2번 오른쪽으로 이동한 결과 : %d\n", y >> 2);
	 // y = 12는 이진수로 [0][0][0][0][1][1][0][0] 입니다.
	 //오른쪽으로 2번 이동하면 [0][0][0][0][0][0][1][1] 가 됩니다.
	 // 이는 2배씩 2번 나눈 값입니다.
	 // 결과 : 3

#pragma endregion

#pragma region 산술 연산자
	
	// 산술 연산자는 수학 연산의 기본 개념인 사칙연산을 다루는 연산자로 항상 두 개의 피연산자를 가져야 하는 이항 연산자이기도 합니다.
	// 피연산자는 또는 선언한 변수, 수식(함수) 등으로 나타낼 수 있으며, 산술 연산자를 통해 피연산자들을 결합합니다.
	// 연산자의 사용 방법은 수학의 연산과정과 동일한 중위 표기법을 사용합니다.
		
	// 피연산자1 + 피연산자2;	// 피연산지1에서 피연산자2를 더함
	// 피연산자1 - 피연산자2;	// 피연산자1에서 피연산자2를 뺌
	// 피연산자1 * 피연산자2;	// 피연산자1에서 피연산자2를 곱함
	// 피연산자1 / 피연산자2;	// 피연산자1을 피연산자2로 나눔
	// 피연산자1 % 피연산자2;	// 피연산자1을 피연산자2로 나눈 나머지

	// 일반적인 수학 계산식과 동일하게 사용되나, 몇 가지 주의할 점이 있습니다.

	// 1. 나누기 연산자(/ )의 경우 정수(int, short, long)간 연산 결과는 정수입니다.
	// 예를 들어 7 / 2의 연산을 수행할 경우 3.5인 소수점 형태의 결과를 반환하는 것이 일반적인 수학이라면,
	// 프로그래밍 언어에서는 자료형(Data type)에 의해서 정수로 반환하여 나머지 수는 버리게 됩니다.
	// 따라서 3인 정수 형태로 결과를 반환하게 됩니다.

	// 2. 모듈러 연산자(%)는 정수형 자료형만 연산이 가능합니다.
	// 변수 선언시 int, short, long과 같은 정수형 자료형만 연산이 가능하며,
	// float, double와 같은 부동소수 연산은 불가능합니다
	// 따라서 7 % 2는 연산이 가능하지만, 7.0 % 2, 7 % 2.0, 7.0 % 2.0과 같은 연산은 불가능합니다.
		
	//예제
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
	// int result1 <- 변수 + 변수 
	// 결과 값 : 20

	printf("result2 의 변수 값 : %d\n", result2);
	// int result2 <- 리터럴 상수 - 변수
	// 결과 값 : 5

	printf("result3 의 변수 값 : %d\n", result3);
	// int result3 <- 심볼릭 상수 * 리터럴 상수
	// 결과 값 : 50

	printf("result4 의 변수 값 : %d\n", result4);
	// int result4 <- 리터럴 상수 / 리터럴 상수
	// 결과 값 : 1

	printf("result5 의 변수 값 : %d\n", result5);
	// int result5 <- 심볼릭 상수 % 심볼릭 상수
	// 결과 값 : 0

	
	return 0;

}
	 
#pragma endregion

#pragma region 부호 없는 자료형
// int main()
// {
// 	  unsigned short mineral = 65535;
// 	  unsigned int gas = -1;
// 
// 	  printf("mineral 변수의 값 : %u\n", mineral);
// 
// 	  printf("gas 변수의 값 : %u\n", gas);
// 	  printf("gas 변수의 값 : %d\n", gas);
// 
// 	  return 0;
// 
// }
	
#pragma endregion