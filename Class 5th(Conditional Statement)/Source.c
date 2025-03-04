#include <stdio.h>
#include <string.h>

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

	// float packet = 3.125f;
	// float pi = 3.14159265f;

	// printf("packet 변수의 값 : %f\n", packet);
	// 결과 : 3.125000
	 
	// printf("pi 변수의 값 : %.8f\n", pi);
	// 결과 : 3.14159274

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

	// '<' = 왼쪽보다 오른쪽 이 큰가 ? ex) c = a < b;
	// '>' = 왼쪽보다 오른쪽 이 작은 가? ex) c = a > b;
	// '<=' = 왼쪽보다 오른쪽이 같거나 큰 가? ex) c = a <= b;
	// '>=' = 왼쪽보다 오른쪽이 같거나 작은 가? ex) c = a >= b;
	// '==' = 왼쪽과 오른쪽이 같은 가? ex) c = a == b;
	// '!=' = 왼쪽과 오른쪽이 다른 가? ex) c = a != b;

	// int data1 = 10 > 5;		// 10이 5보다 크다. 
	// int data2 = 10 < 5;		// 10이 5보다 작다.
	// int data3 = 10 >= 5;		// 10이 5와 같거나 크다.
	// int data4 = 10 <= 5;		// 10이 5보다 작거나 같다.
	// int data5 = 10 == 5;		// 10이 5와 같다.
	// int data6 = 10 != 5;		// 10은 5와 같지않다.
	//
	// printf("data1의 값 :%d\n", data1);
	// printf("data2의 값 :%d\n", data2);
	// printf("data3의 값 :%d\n", data3);
	// printf("data4의 값 :%d\n", data4);
	// printf("data5의 값 :%d\n", data5);
	// printf("data6의 값 :%d\n", data6);

	// 이러한 관계 연산자들은 결과값으로
	// 거짓일 때는 '0' 참일 때는 '1'을 갖게 됩니다.
	// 예를 들어 5 < 10 의 결과는 '1'
	// 5 > 10의 결과는 '0' 입니다.
	// 따라서 이러한 결과 값을 저장하는 변수도
	// 정수형으로 선언되어야 합니다.
	// 0 과 1 모두 정수이기 때문입니다.

	// 관계 연산자 활용 예제

	// int main()
	// {
	// 	int a, b, c;
	// 	printf("비교할 두 정수를 입력하시오.");
	// 	scanf_s("%d %d", &a, &b);
	// 
	// 	c = a < b;
	// 	printf("%d < %d = %d\n", a, b, c);
	// 
	// 	c = a <= b;
	// 	printf("%d <= %d = %d\n", a, b, c);
	// 
	// 	c = a > b;
	// 	printf("%d > %d = %d\n", a, b, c);
	// 
	// 	c = a >= b;
	// 	printf("%d >= %d = %d\n", a, b, c);
	// 
	// 	c = a == b;
	// 	printf("%d == %d = %d\n", a, b, c);
	// 
	// 	c = a != b;
	// 	printf("%d != %d = %d\n", a, b, c);
	// }
#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	// 실행되는 명령입니다.
	  
	// 예시)
	// if (조건식) // 해당 조건식이 참이라면
	// {
	//   실행할 내용  // 실행해라.
	//  }
	// 이때 조건식이란 참 또는 거짓의 결과가 있어야 합니다.
	// 
	// 예제 1)
	// int main()
	// {
	//   int health = 0;

	//   if (health <=0)
	//   {  
	// 	 printf("GameObject Destory\n");
	//    }
	// }
	// 
	// 예제 2)
	// int main()
	// {
	// 	 int a,b;
	// 	 printf("정수 두 개를 입력하시오. ");
	//   scanf_s ("%d %d", &a, &b);
	// 
	// 	if(a > b)
	//   {
	//   printf("%d 가 %d 보다 더큽니다. ", a,b);
	//    }
	// 
	//  return 0;
	// }
	// 
	// 위 의 코드 를 실행시켜서 
    // a에 10, b에는 5를 입력했을 경우,
    // if문의 조건 (a > b) 의 연산이 참(1)이므로
    // if문 아래{ } (중괄호)내부의 내용이 실행됩니다.
	// 
	// 만약 a에 5, b에는 10 을 입력했을 경우
    // if문의 조건 (a > b) 을 만족하지 않기 때문에 연산 결과는 거짓(0)이고,
    // if문 아래의{ } 내용이 실행되지 않아
    // 아무것도 출력되지 않습니다.
	 
    // if문은 이렇게 조건식에 따라{ } 내용을 
    // 실행 할지 실행하지 않을지 결정할 수 있습니다.
	 
    // { } 내부에는 예제에서는 한 줄의 문장만을 적었지만
    // 두 줄 이상의 문장을 작성해도 문제가 없습니다.
	// 
	// 예제 2)
	// int main()
	// {
    // char s;
    // printf("성별을 입력하시오. 남자: M , 여자 : W");
	// scanf_s("%c", &s);
	// 
	// int age;
	// printf("나이를 입력하시오. ");
	// scanf_s("%d", &age);
	// 
	// if (s == 'M' && 20 <= age)
	//  {
	// 	printf("당신은 운전면허 시험을 볼수있습니다! ");
	//  }
	// 
	// return 0;
    // }
    // 또한 위 코드를 보듯이 관계 연사자 뿐만 아니라 
	// 논리 연산자도 함께 활용할 수 있습니다.
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
	
	// else는 이처럼 if문과 함께 작성할 수 있고, 단독으로는 사용될 수 없습니다.
	// else는 바로 위의 if문이 거짓일 때가 실행 조건이기 때문입니다.
	// 그렇기 때문에 else에는 조건식이 따로 올 필요가 없습니다.
	// 또한 if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region 중첩된 if문
	// 중첩된 if문이란 if문의 { } 안에 또 다른 if문이 오는 경우를 말합니다.
    // 예제
	// int main()
	//{
	//	char job;
	//
	//	printf("전사로 전직하였습니다 바로2차전직을하시겠습니까 ?? 수락(Y), 거절(N)");
	//
	//	scanf_s("%c", &job);
	//
	//	if (job == 'Y')
	//	{
	//		int warrior;
	//
	//		printf("1번 광전사(Berserker), 2번 웨폰마스터(Weaponmaster), 3번 마검사(Soulbringer)\n");
	//
	//		scanf_s("%d", &warrior);
	//
	//		if (warrior == 1)
	//		{
	//			printf("축하합니다! 당신의 직업은 광전사입니다.\n");
	//		}
	//		else if (warrior == 2)
	//		{
	//			printf("축하합니다! 당신의직업은 웨폰마스터입니다.\n");
	//		}
	//		else if (warrior == 3)
	//		{
	//			printf("축하합니다! 당신의직업은 귀검사 입니다.\n");
	//		}
	//		else
	//		{
	//			printf("전사 직업 계얼이아닙니다.\n");
	//		}
	//	}
	//	else if(job == 'N')
	//	{
	//		printf("전직을 거절하셨습니다.\n");
	//	}
	//	
	//	return 0;
	//}
	
#pragma endregion


#pragma region switch문
   // 어떤 결과에 따라 그결과부터 실행되는 명령문입니다.

  // char scene = 'A';
   
  // switch (scene)
  // {
  // case 'A': printf("마을");
	   
  // case 'B': printf("광장");
	   
  // case 'C': printf("던전");
	 
  // }
   // 예제 2
   // int Rank = 1;
   //  
   //  switch (Rank)
   //  {
   //  case 1: 
   //  printf("당신의 등급은 'A'입니다.");
   //  break;
   //  
   //  case 2:
   //  printf("당신의 등급은 'B'입니다.");
   //  break;
   //  
   //  case 3:
   //  printf("당신의 등급은 'C'입니다.");
   //  break;
   //  
   //  case 4:
   //  printf("당신의 등급은 'D'입니다.");
   //  break;
   //  
   //  default:
   //  printf("당신의 등급은 'F'입니다.");
   //  break;
   //  }
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

	// https://jimmy-ai.tistory.com/63 Switch~ case 문의 유의사항 및 참고사항 설명집

#pragma endregion

#pragma region 논리 연산자
  // 논리 연산자란 두 개의 참 거짓 관계에 대해서
  // 논리 판단을 통해 참 혹은 거짓을 연산합니다.
  // 논리연산자에는 3가지 유형이있습니다. 
#pragma region AND 연산자
  // && (AND) 연산자 는 양 항이 둘다 참일 때만 결과를 참으로 만드는 연산자입니다.
  // 그외는 모두 거짓으로 출력됩니다.

  // AND 연산자 if(조건 1 && 조건 2)
   
  // '&&' = 그리고 ex) d = (a<b) && (b<c);
   
  // 부가 설명
  // 참 && 참 = 참
  // 참 && 거짓 = 거짓
  // 거짓 && 참 = 거짓
  // 거짓 && 거짓 = 거짓
  
  // 예제 
  // int main()
  // {
  //  int a, b;
  // printf(" 정수를 입력하시오 ");
  // scanf_s("%d", &a);
  // 
  // b = (5 < a) && (a < 10);
  // 
  // printf("%d는 5보다 크고 10보다 작다.(참:1/거짓:0) : %d",a,b);
  // 
  // return 0;
  // }
   
  // 예제 2
  // int level = 99;
  // int exp = 10000;
  // 
  // if (level >= 99 && exp >= 5000)
  // {
  // printf("전직을 할 수 있습니다.\n");
  // }
#pragma endregion

#pragma region OR 연산자
  // || 연산자는 양 항 둘중에 하나라도 참이면 결과를 참으로 만드는 연산자입니다.
  // 양 항이 둘다 거짓이라면 당연히 결과도 거짓으로 출력됩니다.

  // OR 연산자  if(조건 1 || 조건 2)

  // '||' = 또는  ex) d = (a<b) || (c<b);
   
  // 부가 설명
  // 참 || 참 = 참
  // 참 || 거짓 = 참
  // 거짓 || 참 = 참
  // 거짓 || 거짓 = 거짓
  
   
  // 예제
  // int main()
  // {
  // int a,b;
  // printf("정수를 입력하시오. ");
  // scanf_s("%d", &a);
  // 
  // b = (a < 0) || (10 < a);
  // 
  // printf("%d는 음수이거나 10보다 크다. (참:1/거짓:0) : %d", a,b);
  // 
  // return 0;
  // 
  // }
  // 
  // 예제 2
  // int power = 100;
  // int weapon = 20;
  // 
  // if (power >= 30 || weapon >= 25)
  // {
  // 	 printf("해당 무기를 장착 할 수 있습니다\n");
  // }
  // else
  // {
  //     printf("해당 무기를 장착 할 수 없습니다.\n");
  // }

#pragma region NOT 연산자
  // NOT 연산자 if (!조건)
  // '!' = 부정 ex) d = !(c<b);
  // 부가 설명
  // !참 = 거짓
  // !거짓 = 참
  // !(부정) 연산자 는 논리연산자 중에 유일하게 단항 연산자(피연산자가 하나인 연산자를 의미)입니다.
  // ! 연산자는 원래 참과 거짓의 관계를 반대로 바꾸어버리는 연산을 수행합니다.
  // 
  // 예제
  // int main()
  // {
  //	printf("!(5 < 2) = %d\n",(5 < 2)); // 참이 거짓으로 바뀌어서 출력됨.
  //	printf("!(5 > 2) = %d", (5 > 2));  // 거짓이 참으로 바뀌어서 출력됨.	
  // 
  //	return 0;
  // }
   
  // 예제 2
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
