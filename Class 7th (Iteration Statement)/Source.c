#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ�������
	// �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų ��
	// ����ϴ� �������Դϴ�.

	// ���� ���� ������
	// int x = 0;
	// 
	// int vectorX = ++x;
	// 
	// printf("���� ������ x�� �� : %d\n", x);  //1
	// printf("vectorX�� �� : %d\n", vectorX); //1
	// 
	// vectorX = --x;
	// 
	// printf("���� ������ x�� �� : %d\n", x);  //0
	// printf("vectorX�� �� : %d\n", vectorX); //0


	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ�
	// ������ �����մϴ�.

	// ���� ���� ������
	// int y = 0;
	// 
	// int vectorY = y++; 
	// 
	// printf("���� ������ y�� �� : %d\n", y);  //1
	// printf("vectorY�� �� : %d\n", vectorY); //0
	// 
	// 
	// vectorY = y--;
	// 
	// printf("���� ������ y�� �� : %d\n", y);  //0
	// printf("vectorY�� �� : %d\n", vectorY); //1

	// ���� ���� �����ڴ� ������ ������ ���� ������
	// ���� ������ŵ�ϴ�.
#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư����
	// Ƚ����ŭ �ݺ��ϴ� �ݺ����Դϴ�.
	// ����)
	// for(���ʱ��; �����ǽ�; ��������)
	// {
	//  �����ǽ��� ����� ���� ���� �ݺ������� �����ϰ��� �ϴ� ��ɹ�;
	// }
	// ������� ����
	// ����)
	// for (int i = 0; i < 5; i++) 
	// {
	// 	printf("Execute...\n");
	// }
	// 
	// ���� ������ ���� a(50)-b(5)�� 
	// 10�� �ݺ����Ѽ� a�ǰ��� 0 �̵ǰ���
	// ���� 2)
	// int a = 50;
	// int b = 5;
	// 
	// for (int i = 10; i > 0; --i) 
	// {
	// 	a = a - b;
	// 	printf(" ���� ���� �۵� : %d\n", a);
	// }
	
	// for���� ��� ������ ������ ���¿� �ݴ�� �ʱ����
	// �����ϰ� �Ǹ� ������ ��ġ���� �ʾ� ��� �ݺ�������
	// ����Ǵ� ������ �߻��մϴ�.
	// �����ڷ� : https://www.tcpschool.com/c/c_control_loop
#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ ����ؼ� �־���
	// ��ɹ��� �����ϴ� �ݺ����Դϴ�.
	// ����)
	// while(�����ǽ�)
	// {
	//  �����ǽ��� ����� ���� ���� �ݺ������� �����ϰ��� �ϴ� ��ɹ�;
	// }
	// ������� �� ����
	// int count = 1;        
	// 
	// while (count <=5)
	// {
	// 	printf("%d", count)
	// 		
	// 		count++;
	// }                      

	// int y = 6;     //���� �� ����
	// while (--y)
	// {
	// 	printf("y�� ��. %d\n", y);
	// }

	// while���� ��� ������ �Ʒ��� ����Ǹ�,
	// �Ʒ��� �ִ� ��ɹ��� ������ �� ������
	// �ٽ� ���� �ִ� ��ɹ����� ���ư��� �����մϴ�.
#pragma endregion

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����Դϴ�.

	// int connection = 0;
	// 
	// do
	// {
	// 	printf("Connection...");
	// } 
	// while (connection > 0);

#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ� �ݺ����� �̾
	// �����ϴ� ����Դϴ�.

	// for (int i = 1; i <= 10; ++i)
	// {
	// 	if(i % 3 == 0)
	// 	{ 
	// 		continue;
	// 	}
	// 	printf("%d\n", i);
	// }


#pragma endregion

#pragma region ���� �� ���
	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���
	// ������ ����ϴ� ������ �����ϴ� ���Դϴ�.

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
	// printf("y�� �� : %d\n", y);

#pragma endregion

#pragma region (2)�� for��

	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("i�� �� : %d\n",i);
	// 
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("j�� �� : %d\n", j);
	// 	}
	// 	printf("\n");
	// }


#pragma endregion


#pragma endregion


}