#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.

	int array[3];

	array[0] = 10;

	array[1] = 20;

	array[2] = 30;

	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸�
	// ������ ������ �˴ϴ�.

	printf("float �ڷ����� ũ�� : %u\n", sizeof(float));
	
	printf("array �迭�� ũ�� : %u\n", sizeof(array));

	
	int size = sizeof(array) / sizeof(int);

	
	for (int i = 0; i < 3; i++)
	{
		printf("array[%d]: %d\n",i, array[i]);
	}
	
	// �迭�� ��� ù ��° ���Ҵ� 0���� �����մϴ�.
#pragma endregion

}   