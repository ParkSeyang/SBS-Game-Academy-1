#include <stdio.h>

void Function() // �Լ��� ����
{
	printf("Function..\n");
}

  void position(int x, int y) // �Ű� ���� ����
  {
  	printf("x�� �� : %d\n", x);
  	printf("y�� �� : %d\n", y);
  }

int Compare(float x, float y)
{
	if (x < y)
	{
		return 1;
	}
	else if(x == y)
	{
		return 0;
	}
	else
	{
		return - 1;
	}
}

void swap(int left, int right)
{
	int temporary = left;

	left = right;

	right = temporary;
	
}


void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� �����Դϴ�.

	// Function();
	// 
	// Function();
	// 
	// Function();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� �����ϴ�.

#pragma endregion

#pragma region �Ű� ����
	// �Լ��� ���ǿ���  ���޹��� �μ��� �Լ� ���η�
	// �����ϱ� ���� ����ϴ� �����Դϴ�.

	// position(5, 5);
	 
	// // �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// // �Լ��� ����Ǹ� �޸𸮿��� ������ϴ�.
	 
	// printf("Compare �Լ��� �� : %d\n", Compare(5.25f, 8.125f));

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������
	// �Բ� ������ �� ������, ���� ���� �Ű� ������
	// �����Ͽ� ����� �� �ֽ��ϴ�.
#pragma endregion

#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ�
	// ���Դϴ�.

	// ���� a���� 20�� ���� �ְ� b���� 10�� ���� �ִ� �Լ�����������
	// swap �Լ��� �̿��ؾ��մϴ�. ��Ʈ: �ӽú����� ���� �غ�����(temporary)

		 int a = 10;
		 int b = 20;

		 swap(a, b);
		 
		 int temporary = a;
		 
		 a = b;
		 
		 b = temporary;
		 
		 printf("a�� �� : % d\n", a);
		 printf("b�� �� : % d\n", b);
	 
	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ����
	// ������ �� �ִ� �μ��� ���� �����Ǹ�, ���� �����ϴ�
	// �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ� �մϴ�.

	

	
#pragma endregion


}   