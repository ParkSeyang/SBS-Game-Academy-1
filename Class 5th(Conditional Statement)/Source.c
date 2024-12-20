#include <stdio.h>


#pragma region 전처리기
// 프로그램이 컴파일되기 이전에 프로그램에 대한
// 사전 처리하는 과정입니다.

// 전처리기는 컴파일러가 아닌 선행처리기에 의해서
// 처리되는 문장이기 때문에 명령문 끝에 ";"을 사용하지 않습니다.
#pragma endregion

void main()
{
#pragma region 실수를 저장하는 방법

#pragma region 고정 소수점
	// 소수점의 위치를 고정하여 소수점의 위치를
	// 나타내는 방법입니다.

	//고정 소수점은 정수부와 소수부의 크기가 작으므로
	//표현할 수 있는 범위가 한정되어 있습니다.
#pragma endregion

#pragma region 부동 소수점
	// 소수점의 위치를 고정하지 않고 소수점의 위치를
	// 나타내는 방법입니다.

	// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는
	// 표현하지 않습니다.
#pragma endregion

#pragma region 실수 형태의 (10) 진수를 (2) 진수로 변환하는 과정
	// 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한
	// 다음 곱한 결과의 정수 부분을 위에서 아래로 순서대로
	// 정렬 합니다.

	//float packet = 3.125f;
	//float pi = 3.14159265f;

	//printf("packet 변수의 값 : %f\n", packet);
	//printf("pi 변수의 값 : %.8f\n", pi);

	// 표준 출력함수로 소수를 출력할 때 4byte 크기의
	// 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	// 8byte 크기의 실수형 자료형은 소수점 이하 15자리까지만 표기됩니다.
#pragma endregion
#pragma endregion

#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라
	// 동작을 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를
	// 0 또는 1이라는 값으로 나타내는 연산자입니다.

	// int data1 = 10 > 5;		// 10이 5보다 크다. 
	// int data2 = 10 < 5;		// 10이 5보다 작다.
	// int data3 = 10 >= 5;		// 10이 5와 같거나 크다.
	// int data4 = 10 <= 5;		// 10이 5보다 작거나 같다.
	// int data5 = 10 == 5;		// 10이 5와 같다.
	// int data6 = 10 != 5;		// 10은 5와 같지않다.

	// printf("data1의 값 :%d\n", data1);
	// printf("data2의 값 :%d\n", data2);
	// printf("data3의 값 :%d\n", data3);
	// printf("data4의 값 :%d\n", data4);
	// printf("data5의 값 :%d\n", data5);
	// printf("data6의 값 :%d\n", data6);

	// 관계 연산자는 조건이 맞을 때 1 이라는 값으로 반환되며,
	// 조건이 틀릴 때는 0이라는 값으로 반환됩니다.
#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	// 실행되는 명령입니다.

	// int health = 0;

	// if (health <=0)
	//{  
	// 	printf("GameObject Destory\n");
	// }
#pragma endregion

#pragma region else if문
	// if 문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문입니다.

	// char grade = 'A';
	// if (grade == 'A')
	// { 
	// 	printf("100점 ~ 91점입니다.\n");
	// }
	// else if(grade == 'B')

	// { 
	// 	printf("90점 ~ 81점입니다.\n");
	// }

	// else if문의 여러 개를 생성하는 것이 가능하며,
	// if문이 존재하지 않으면 사용할 수 없습니다.
#pragma endregion

#pragma region else문
	// if 문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

	   // int tier = 3;
	   // 
	   //  if (tier = '1')
	   // {
	   // printf("당신의 tier는 'A'입니다.\n");
	   // }
	   // else if (tier = '2')
	   // {
	   //   printf("당신의 tier는 'B'입니다.\n");
	   // }
	   // else
	   // {
	   // printf("유효하지 않은 티어입니다.\n");
	   // }

	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region switch문
   // 어떤 결과에 따라 그결과부터 실행되는 명령문입니다.

   // int scene = 1;

   // switch (scene)
   // {
   // case 1 : printf("마을")
   // case 2 : printf("던전")
   // }
#pragma region break문
	// 특정한 지점에서 분기를 탈줄하는 제어문입니다.

#pragma endregion

	// char key = 'Z';

	// switch (key)
	// {
	// 	// switch문은 해당 조건이 완료되었을 때, break
	// 	// 문이 없으면 나머지 밑에 있는 case 문까지
	// 	// 계속 실행시키다가 종료합니다.
	// 
	// case 'W': printf("↑");
	// 	break;
	// case 'A': printf("←");
	// 	break;
	// case 'S': printf("↓");
	// 	break;
	// case 'D': printf("→");
	// 	break;
	// default : printf("Exception");
	// 	break;
	// }

	   // switch문의 경우 조건에 해당하는 값에 따라 조건의
	   // 위치로 이동합니다
#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
	// and 연산자 if(조건 1 && 조건 2)

	// int level = 99;
	// int exp = 10000;
	// 
	// if (level >= 99 && exp >= 5000)
	// {
	// printf("전직을 할 수 있습니다.\n");
	// }
#pragma endregion

#pragma region OR 연산자
	// or 연산자  if(조건 1 || 조건 2)

	// int power = 100;
	// int weapon = 50;
	// 
	// if (power >= 30 == weapon >= 25)
	// {
	// 	printf("해당 무기를 장착 할 수 있습니다\n");
	// }

#pragma region NOT 연산자
	// if(!조건)

	// int state = 0;
	// 
	// if (!state)
	// {
	// 	printf("Game Start");
	// }

#pragma endregion

#pragma endregion

#pragma endregion


#pragma endregion


}
