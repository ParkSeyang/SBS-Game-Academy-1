#include <stdio.h>
#include <math.h>

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
	float x;
	float y;
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

	printf("100�� ������ : %lf\n", sqrt(100));
	
	printf("10�� : %lf\n", pow(10,2));
	
	struct Vector2.characterx = 5;
	struct Vector2.charactery = 5;
	struct Vector2.slimex = 0;
	struct Vector2.slimey = 0;

	if (ranger < 3.0f)
	{
		printf("")

	}
	else if (ranger > 3.0f)
	{
		printf("")
	}

#pragma endregion


	return 0;
}