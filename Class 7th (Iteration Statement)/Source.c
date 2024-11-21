#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma region 증감 연산자
	// 피연산자를 하니씩 증가키시거나 감소시킬 때
	// 사용하는 연산자입니다.

	// int x = 0;
	// 
	// int vectorX = ++x;
	// 
	// printf("전위 증가한 x의 값 : %d\n", x);  //1
	// printf("vectorX의 값 : %d\n", vectorX); //1
	// 
	// vectorX = --x;
	// 
	// printf("전위 감소한 x의 값 : %d\n", x);  //0
	// printf("vectorX의 값 : %d\n", vectorX); //0


	// 전위 증감 연산자는 변수의 값을 증감시킨 후에
	// 연산을 수행합니다.

	// int y = 0;
	// 
	// int vectorY = y++; 
	// 
	// printf("후위 증가한 y의 값 : %d\n", y);  //1
	// printf("vectorY의 값 : %d\n", vectorY); //0
	// 
	// 
	// vectorY = y--;
	// 
	// printf("후위 감소한 y의 값 : %d\n", y);  //0
	// printf("vectorY의 값 : %d\n", vectorY); //1

	// 후위 증감 연산자는 연산을 수행한 다음 변수의
	// 값을 증감시킵니다.
#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한
	// 횟수만큼 반복하는 반복문입니다.
	//  ex)
	// for(초기식; 조건식; 증감식)
	// {
	//  반복적으로 실행할 내용~
	// }

	// for (int i = 0; i < 5; i++) // 강사님의 예제
	// {
	// 	printf("Execute...\n");
	// }

	// for(int x = 10; x > 0; --x) 내가 응용한 예제
	//  { 
	// 	 printf("카운트 다운.%d\n", x);
	//  }


	// for문의 경우 조건이 끝나는 형태와 반대로 초기식을
	// 연산하게 되면 조건이 일치하지 않아 계속 반복적으로
	// 실행되는 문제가 발생합니다.

#pragma endregion

#pragma region while문
	//특정 조건을 만족할 때까지 계속해서 주어진
	// 명령문을 실행하는 반복문입니다.

	// int count = 1;        // 강사님이 한 예제
	// 
	// while (count <=5)
	// {
	// 	printf("%d", count)
	// 		
	// 		count++;
	// }                      

	// int y = 6;     //내가 한 예제
	// while (--y)
	// {
	// 	printf("y의 값. %d\n", y);
	// }

	// while문의 경우 위에서 아래로 실행되며,
	// 아래에 있는 명령문의 실행이 다 끝나면
	// 다시 위에 있는 명령문으로 돌아가서 실행합니다.
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문입니다.

	// int connection = 0;
	// 
	// do
	// {
	// 	printf("Connection...");
	// } 
	// while (connection > 0);

#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고 반복문은 이어서
	// 실행하는 제어문입니다.

	// for (int i = 1; i <= 10; ++i)
	// {
	// 	if(i % 3 == 0)
	// 	{ 
	// 		continue;
	// 	}
	// 	printf("%d\n", i);
	// }


#pragma endregion

#pragma region 단축 평가 계산
	// 계산을 진행하는 도중에 결과가 이미 확정된 경우
	// 나머지 계산하는 과정을 생략하는 평가입니다.

	// int x = 0;
	// int y = 0;
	// int z = 0;
	// 
	// if (x == 0 && y++)
	// 	{
	// 	printf("Short Circuit\n");
	// 	}
	// 
	// if (z != 0 || y++)
	// {
	// 	printf("OR Operrator");
	// }
	// 
	// printf("y의 값 : %d\n", y);

#pragma endregion

#pragma region (2)중 for문

	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("i의 값 : %d\n",i);
	// 
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("j의 값 : %d\n", j);
	// 	}
	// 	printf("\n");
	// }


#pragma endregion


#pragma endregion


}