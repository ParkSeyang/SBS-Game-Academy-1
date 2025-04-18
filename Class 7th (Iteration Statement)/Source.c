#include <stdio.h>
#include <windows.h>
int main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로
	// 수행하는 명령문입니다.

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때
	// 사용하는 연산자입니다.

	// 전위 증감 연산자
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

	// 후위 증감 연산자
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
	// 예시)
	// for(①초기식; ②조건식; ④증감식)
	// {
	//  ③조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	// }
	// 강사님의 예제
	// 예제)
	// for (int i = 0; i < 5; i++) 
	// {
	// 	printf("Execute...\n");
	// }
	// 
	// 내가 응용한 예제 a(50)-b(5)를 
	// 10번 반복시켜서 a의값이 0 이되게함
	// 예제 2)
	// int a = 50;
	// int b = 5;
	// 
	// for (int i = 10; i > 0; --i) 
	// {
	// 	a = a - b;
	// 	printf(" 빼기 연산 작동 : %d\n", a);
	// }
	
	// for문의 경우 조건이 끝나는 형태와 반대로 초기식을
	// 연산하게 되면 조건이 일치하지 않아 계속 반복적으로
	// 실행되는 문제가 발생합니다.
	// 참고자료 : https://www.tcpschool.com/c/c_control_loop
#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 계속해서 주어진
	// 명령문을 실행하는 반복문입니다.
	// 예시)
	// while(①조건식)
	// {
	//  ②조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	// }
	
	// 강사님이 한 예제
	// int count = 1;        
	// 
	// while (count <=5)
	// {
	// 	printf("%d", count)
	// 		
	// 		count++;
	// }                      

	// 내가 한 예제
	// int y = 2;
	// if (y == 2)
	// {
	//  while (y < 128)
	//  {
	// 	 y *= 2;
	// 	 printf("y의 2제곱의 값 : %d\n", y);
	//  }
	// }
	// else if(y == 3)
	// {
	//  while (y < 384)
	//  {
	// 	 y *= 2;
	// 	 printf("y의 3제곱 값 : %d\n", y);
	//  }
	// }

	 
	// while문의 경우 위에서 아래로 실행되며,
	// 아래에 있는 명령문의 실행이 다 끝나면
	// 다시 위에 있는 명령문으로 돌아가서 실행합니다.
#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 다음
	// 조건에 따라 명령문을 실행하는 반복문입니다.
	// 예시
	// do
	// {
	//  ①조건식의 결과가 참인 동안 반복적으로 실행하고자 하는 명령문;
	// } while(②조건식);
	
	// 예제)
	// int connection = 10;
	 
	// do
	// {
	// 	printf("Connecting...\n");
	//	connection -= 1;
	//	Sleep(3000);
	// } while (connection > 0);
	// printf("Connection complete!");
	 
	// 예제2)
	// int a = 1;
	// do
	// {
	// 	a = a * 2;
	// 	printf("a 의 값 : %d\n", a);
	// } while (a< 10);
	
	// 부가설명
	// 반복문들은 반복문안에 반복할 문장이 한문장이면 
	// 중괄호를 생략할 수 있습니다.
	// 
	// 예시
	// int i = 0;
	// for (int i = 0; i < 5; i++)
	// printf("중괄호 생략\n");
#pragma endregion

#pragma region 반복문에서의 break문과 continue문
	// break 문
	// 임의로 반복문안에서 반복을 즉시 끝낼때 사용합니다.
	// 
	// 예제)
	// int i;	// 반복 횟수를 세기위한 제어 변수
	// int sum = 0; // 1부터 10까지의 합을 누적할 변수
	// 
	// for (i = 1; i <= 10; i++) // i 는 1부터 10까지 증가하면서 열 번 반복
	// {
	// 	sum += i; // i값을 sum에 누적
	// 	if (sum > 30)break; // 누적한 값이 30보다 크면 반복문을 끝낸다.
	// }
	//
	// printf("누적한 값 : %d\n", sum);
	// printf("마지막으로 더한 값 : %d\n", i);
	// 
	// 부가설명
	// break문 은 자신이 속한 반복문 하나만 벗어나기 때문에 중첩 반복문에서 
	// break문을 사용시 주의 해야 합니다 또한 반복문안에 if문 블록에서 break문을 사용시
	// if문 블록을 포함한 반복문을 벗어납니다.
	// 
	// 예시
	// while(조건문)
	// {
	//  조건이 참일때 실행될 명령문
	//		if(조건식)
	//		{
	//			break;
	//		}	  ↙
	// }		↙ 
	// 반복문 블록 전체를 벗어남!
	// 
	// continue문
	// 
	// 해당 조건문만 실행하지 않고 반복문은 이어서
	// 실행하는 제어문입니다.
	// 예시)
	// for(i = 1; i <= 100; i++)
	// {
	//	 if((i % 3) == 0)
	//	 {
	//		continue;ㅡ
	//   }            ㅣ
	//  sum += i;     ㅣ
	// }        ☜ㅡㅡㅡ  i가 3의배수면 sum += i 문장을 건너뛰고 블록끝으로 간후에 다시 반복합니다.
	// 
	// 예제)
	// for (int i = 1; i <= 10; ++i)
	// {
	// 	if(i % 3 == 0)
	// 	{ 
	// 		continue;
	// 	}
	// 	printf("%d\n", i);
	// }
	
	// 추가 설명
	// for문과 달리 while문에서 continue를 사용하면 다음 실행 위치가 조건식이 됩니다. 
	// 만약 위의 예시 for문을 다음과 같이 while문으로 바꾸면 
	// 증감식이 실행되지 않으므로 무한 반복합니다.
	
	// 예제2)
    // i = 1;
    // while (1 <= 100)
    // {
    // 	if ((i % 3) == 0)
    // 	{
    // 		continue;ㅡ
    // 	}			  ㅣ i가 3일때 증감식 i++을 건너뛰므로
    // 	sum += i;     ㅣ while문의 조건식은 계속 참이 됩니다.
    // 	i++;          ㅣ 
    // }      ☜ㅡㅡㅡㅡ 

#pragma endregion

#pragma region 단축 평가 계산
	// 계산을 진행하는 도중에 결과가 이미 확정된 경우
	// 나머지 계산하는 과정을 생략하는 평가입니다.

	// int x = 0;
	// int y = 0;
	// int z = 0;
	// if (x == 0 && y++)
	// {
	// 	printf("Short Circuit\n");
	// }
	// 
	// if (z != 0 || y++)
	// {
	// 	printf("OR Operrator\n");
	// }
	//
	// printf("y의 값 : %d\n", y);
	// 
	// 풀이 설명
	// 첫번째 if 문 (x == 0 &&(AND연산자) y++) 에서 &&(AND)연산자는
	// 둘다 참이여야만 결과값이 참이 나옵니다. x == 0 은 참 그리고 y++는
	// y를 1 증감 시키므로 참입니다 그러므로 확정적으로 참이기때문에 if 문안에 printf 함수가
	// 생락 되어 버리는걸 알수있습니다.
	// 
	// 두번째 if문(z != 0 || y++) 에서 ||(OR) 연산자는 둘중하나라도 참이면 결과 값이 참이됩니다.
	// z != 0은 z가 0이므로 거짓입니다 y++ 은 y를 1 증가 시키므로 참입니다.
	// 
	// 따라서 확정적인 참이아닌 계산과정에서 참이 되었으므로 계산이 생략되지않고 진행됩니다.
	// 결국 두번째 if문은 참이므로 printf 함수가 출력됩니다.
	// 
	// 마지막 printf 함수에서 y값은 첫번째 if문과 두번째 if문에서 y값은 1씩 증감했으므로 
	// y값은 2입니다.
#pragma endregion

#pragma region (2)중 for문
	// 예제)
	// int x = 0;
	// int y = 0;
	//  for (int i = 0; i < 3; i++)
	//  {
	//  	printf("i의 값 : %d\n",i);
	// 	++x;
	//  	for (int j = 0; j < 3; j++)
	//  	{
	//  		printf("j의 값 : %d\n", j);
	// 		++y;
	//  	}
	//  	printf("\n");
	//  }
	//  printf("반복측정 x의 값 : %d\n",x);
	//  printf("반복측정 y의 값 : %d\n",y);
	// 
	// 풀이 설명
	// 2중 for문 i와 j에는 각자 3번의 반복횟수를 부여하였지만
	// i와 j의 총 반복횟수는 서로 다릅니다 그 이유는 외부반복문이
	// 실행될때마다 내부반복문이 반복하기 때문입니다. 그래서 i가 한번
	// 반복될때마다 j는 그안에서 3번 반복 하게 됩니다. 그래서 i는 총3번
	// j는 9번을 반복하게 됩니다.
#pragma endregion

#pragma region (2)중 for문을 이용한 별찍기
	// 내가한 예제 1,2
	// int i = 0;
	// int j = 0;
	// 
	// for (i = 0; i < 5; i++)
	// {
	// 	for (j = 0; j <= i; j++)
	// 	{
	// 	printf("*");
	//    }
	// 	printf("\n");
	// }

	// *   결과값
	// **
	// ***
	// ****
	// *****

	// for(int i = 0; i < 5; i++ )
	// {
	// for(int j = 0; j <= i; j++ )
	// {
	// 	 printf("*");
	// }
	// printf("\n");
	// }

	//  강사님의 예제

	// int input = 0;
	// 
	// scanf_s("%d", &input);
	// 
	// for (int i = 0; i < input; i++)
	// {
	// 	for (int j = 0; j <= i; j++)
	// 	{
	// 		printf("★");
	// 	}
	// 	printf("\n");
	// }


#pragma endregion

#pragma endregion


}