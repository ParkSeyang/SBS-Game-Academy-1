#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct GameObject
{
	char tier;      // (char 1byte)   �������
	int health;	    // (int 4byte)    �������			
	float attack;   // (float 4byte)  �������
	double defence; // (double 8byte) �������

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸���
	// ũ�Ⱑ �ٸ��� ���� �� �� ������, ����ü ũ�⸦ �����ϴ�
	// ���´� �⺻ �ڷ������θ� �����Ǿ� �ֽ��ϴ�.
	// ū �ڷ����� �߰��� �Ѱ�� ����Ʈ �е��������� ���ʿ��� �뷮�� 
	// �� ����ϰ� �ǹǷ� ū �ڷ����� ��� �Ͻǰ�쿡�� ���� �ϴܿ� ��ġ�ϴ°��� �����ϴ�.
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
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct GameObject gameObject;
	// 
	// gameObject.tier = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// gameObject.defense = 3.4f;
	// 
	// printf("GameObject ��� : %c\n", gameObject.tier);
	// printf("GameObject ü�� : %d\n", gameObject.health);
	// printf("GameObject ���ݷ� : %f\n", gameObject.attack);
	// printf("GameObject ���� : %f\n", gameObject.defense);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������
	// �������� �����Ƿ�, ����ü ���ο� �ִ� �����͸�
	// �ʱ�ȭ�� �������ϴ�
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ����
	// ���� �� �ֵ���, �����Ϸ��� ���������� ��Ͽ�
	// ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// struct GameObject object = {'C', 30, 3.25};
	 
	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� 
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�
	// ��Ʈ : 
	// printf("100�� ������ : %lf\n", sqrt(100));
	// 
	// printf("10�� : %lf\n", pow(10,2));
	
	// ���� Ǯ� ����
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
	// printf("ĳ���Ϳ� �����Ӱ��� �Ÿ� : %lf\n", sqrt(ranger));
	// 
	// if (ranger < 3.0f)
	// {
	// 	printf("�������� �̵��Ͽ����ϴ�.\n");
	// 
	// }
	// else if (ranger > 3.0f)
	// {
	// 	printf("�������� ����� �����Ͽ����ϴ�.\n");
	// }
	// return 0;
	
	
	//������� ��� Ǯ� �۵������� �������� ����
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
	// 	printf("�̵�����\n");
	// 
	// }
	// else if (distance < 3.0)
	// {
	// 	printf("���ݻ���\n");
	// }


#pragma endregion

#pragma region �ڱ� ���� ����ü
	// ����ü ���ο� �ڱ� �ڽ��� �ڷ����� ��� ������
	// ������ �ִ� ����ü�Դϴ�.

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