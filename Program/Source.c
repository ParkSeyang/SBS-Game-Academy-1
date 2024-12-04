#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct GameObject
{
	char tier;      // (char 1byte)   멤버변수
	int health;	    // (int 4byte)    멤버변수			
	float attack;   // (float 4byte)  멤버변수
	double defence; // (double 8byte) 멤버변수

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의
	// 크기가 다르게 설정 될 수 있으며, 구조체 크기를 결정하는
	// 형태는 기본 자료형으로만 구성되어 있습니다.
	// 큰 자료형을 중간에 둘경우 바이트 패딩과정에서 불필요한 용량을 
	// 더 사용하게 되므로 큰 자료형을 사용 하실경우에는 제일 하단에 배치하는것이 좋습니다.
};

struct Vector2
{
	float characterx;
	float slimey;
	float characterx2;
	float slimey2;
};
struct Vector1
{
	float x;
	float y;
};
struct Node
{
	int data;
	struct Node * next;
	

};
struct currentNode
{
	int set;
	struct currentNode* next;

};



int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct GameObject gameObject;
	// 
	// gameObject.tier = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// gameObject.defense = 3.4f;
	// 
	// printf("GameObject 등급 : %c\n", gameObject.tier);
	// printf("GameObject 체력 : %d\n", gameObject.health);
	// printf("GameObject 공격력 : %f\n", gameObject.attack);
	// printf("GameObject 방어력 : %f\n", gameObject.defense);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수없습니다
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// struct GameObject object = {'C', 30, 3.25};
	 
	// printf("GameObject의 크기 : %d\n", sizeof(object));

	// 구조체의 크기는 구조체를 구성하는 멤버 중에 
	// 크기가 가장 큰 자료형의 배수가 되도록 정렬합니다.
#pragma endregion

#pragma region 두 점 사이의 거리
	// 힌트 : 
	// printf("100의 제곱근 : %lf\n", sqrt(100));
	// 
	// printf("10² : %lf\n", pow(10,2));
	
	// 내가 풀어본 예제
	// struct Vector2 Object;
	// 
	// Object.characterx = 2.3f;
	// Object.slimey = 5;
	// Object.characterx2 = 0;
	// Object.slimey2 = 4.5f;
	// 
	// double ranger;
	// 
	// ranger = ((pow(Object.characterx - Object.characterx2, 2)) + (pow(Object.slimey - Object.slimey2, 2)));
	// 
	// printf("캐릭터와 슬라임간의 거리 : %lf\n", sqrt(ranger));
	// 
	// if (ranger < 3.0f)
	// {
	// 	printf("슬라임이 이동하였습니다.\n");
	// 
	// }
	// else if (ranger > 3.0f)
	// {
	// 	printf("슬라임이 당신을 공격하였습니다.\n");
	// }
	// return 0;
	
	
	//강사님이 길게 풀어서 작동원리를 설명해준 예제
	// struct Vector1 character = { 0, 0 };
	// struct Vector1 slime = { 3.75f, 3.75f };
	// 
	// double x = character.x - slime.x;
	// double y = character.y - slime.y;
	// 
	// double distance = sqrt(pow(x, 2) + pow(y, 2));
	// 
	// if (distance >= 3.0)
	// {
	// 	printf("이동상태\n");
	// 
	// }
	// else if (distance < 3.0)
	// {
	// 	printf("공격상태\n");
	// }


#pragma endregion

#pragma region 자기 참조 구조체
	// 구조체 내부에 자기 자신의 자료형을 멤버 변수로
	// 가지고 있는 구조체입니다.

	struct Node* node1 = malloc(sizeof(struct Node));

	struct Node* node2 = malloc(sizeof(struct Node));

	struct Node* node3 = malloc(sizeof(struct Node));

	node1->data = 10;
	node2->data = 20;
	node3->data = 30;


	node1->next = &node2;
	node2->next = &node3;
	node3->next = NULL;
	
	struct currentNode* node1 =


		while (i < 3;)
		{
			printf("")
		}


#pragma endregion

	
}