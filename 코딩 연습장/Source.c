#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#pragma region �켺�̶� �Լ� �����ѳ���(2024.11.28)
//void swap(int left, int right)
//{
//	int temporary = left;
//
//	left = right;
//
//	right = temporary;
//
//}

//int test(int test, int test2)
//{
//	int team = test;
//	test = test2;
//	test2 = team;
//
//	printf("test�� �� ; %d\n", test);
//	printf("test2�� �� ; %d\n", test2);
//	printf("------------------12312321323------");
//
//	return test + test2;
//}

//int main()
//{
//#pragma region Hello World ����ϱ�
//	// #include<stdio.h>
//
//	// int main()
//	// {
//	// printf("Hello World");
//	// }
//
//#pragma endregion
//
//#pragma region 
//	
//	
//	int a = 10;
//	int b = 20;
//	int returnValue = test(a, b);
//	printf("���� �� ; %d\n", returnValue);
//
//	int c = 50;
//	int d = 70;
//	test(c, d);
//
//
//	 c = 60;
//	 d = 70;
//	test(c, d);
//
//
//#pragma endregion
//
//	
//}

//void calPlus(int num1, int num2)
//{
//	int plus = num1 + num2;
//	printf("���ϱ� : %d\n", plus);
//}
//
//
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	calPlus(num1, num2);
//
//	int num3 = 30;
//	int num4 = 40;
//	calPlus(num3, num4);
//}
//int  multiplication(int num1, int num2)
//{
//
//	printf("������ �� : %d\n", num1 * num2);
//
//	return num1 * num2;
//}
//
//int main()
//{
//	int num1 = 5;
//	int num2;
//	num2 = 5;
//	
//	int reset = multiplication(num1, num2);
//
//	printf("���� �� : %d\n", reset);
//
//
//}

//void plus(int num1, int num2)
//{
//	printf("������ �� : %d\n", num1 + num2);
//}
//
//
//
//void calculater(char x, int num1, int num2)
//{
//	switch (x) {
//	case '+':
//		plus(num1, num2);
//		break;
//	case '-':
//		printf("������ �� : %d\n", num1 - num2);
//		break;
//	case '*':
//		printf("������ �� : %d\n", num1 * num2);
//		break;
//	case '/':
//		printf("�������� �� : %d\n", num1 / num2);
//		break;
//	default:
//		printf("��Ȯ�� ���� �Է��Ͻʽÿ�");
//		break;
//	}
//
//	return num1 * num2;
//}
//
//int main()
//{
//	char x;
//	x = '+';
//	int num1 = 5;
//	int num2;
//	num2 = 5;
//	
//	calculater(x, num1, num2);
//
//	x = '-';
//	calculater(x, num1, num2);
// }
#pragma endregion

#pragma region ����� �� �Լ� ���� �ɰ��¹� ����(2024.11.28)
//int main()
//{
//	// ����� �ڵ�
//	//int i = 0, j = 0;
//
//	////for (i = 0; i < 5; i++)/*
//	//{
//	//	for (j = 0; j <= i; j++)
//	//	{
//	//		printf("*");
//	//	}
//	//	printf("\n");
//	//}*/
//
//	int line = 5;
//	int star = 1;
//	int space = line - star;
//
//	for (int i = 0; i < line; i++)
//	{
//		for (int k = 0; k < space; k++)
//		{
//			printf(" ");
//		}
//
//		for (int j = 0; j < star; j++)
//		{
//			printf("*");
//		}
//
//		space--;
//		star++;
//		printf("\n");
//	}
//	
//	int c, d, e;
//
//	int
//		c
//		, d
//		, e
//		;
//
//	int c;
//	int d;
//	//int e; 2022-11-12 �̴븮�� �������
//
//}

// int main(void) // ���� int n �� ������ �ȿ��� 7�ǰ��� ����
// {
// 	int n = 2147483647;
// 	int count = 0;
// 
// 	while (n > 0)
// 	{
// 		if ((n % 10) == 7)
// 		{
// 			count++;
// 		}
// 		n = n / 10;
// 	}
// 	printf("7�� ���� : %d\n", count);


// �켺�̰� �ɰ��� Ǯ� ����
	/*int findNum = 7;
	int limitValue = 0;

	while (n > limitValue)
	{
		if ((n % 10) == findNum)
		{
			count++;
		}
		n = n / 10;
	}
	printf("7�� ���� : %d\n", count);*/

	/*string s = "abcde";
	s= "abc"
		s = "abdasefafe"
	while (\�Է°� != 0)
	{

	}


	for (int i = 0; i < 5; i++)
	{

	}*/

	// return 0;
	//}




//function(arr[])
//{
//	for ()
//	{
//
//	}
//}
//
//
//int main()
//{
//	 int array[3];
//
//	 array[0] = 10;
//	 array[1] = 20;
//	 array[2] = 30;
//	 
//	 int a = 10;
//	 int b = 20;
//	 int c = 30;
//
//
//	 fruit[] banana apple
//
//		 int arr[] = sdfjas;dfjas
//
//		 function(arr)
//
//		 arr[].length;
//
//	 int arr[3] = { a, b, c };
//	 for ()
//	 {
//		 int x = arr[0];
//		 int y = arr[1];
//		 x;
//		 y;
//		 x;
//		 y;
//	
//		 x;
//		 y;
//
//		 arr[0];
//		 arr[0];
//		 arr[0];
//
//		 x
//
//			 arr[0];
//	 }
//
//}
#pragma endregion

#pragma region Be happy! ����ϱ�(printf ����ϴ¹� 1-1)
// #include<stdio.h>
// int main(void)
// {
// 	printf("Be happy!");
// 	
// 	return 0;
// }
#pragma region Be happy!�� exe ���Ϸ� �����ϱ�
// #include<stdio.h>
// #include<stdlib.h>

// int main(void)
// {
// 	printf("Be happy!");
// 	system("pause");
// 
// 	return 0;
// }
#pragma endregion

#pragma region (10)��(20)�� ���ϴ� ���α׷� ����	
/*int main(void) 
	{
		10 + 20;

		return 0;
	}*/

#pragma endregion

#pragma region Be happy! My freind ����ϱ�(printf ����ϴ¹� 1-2)
// #include<stdio.h>

// int main(void)
// {
// 	printf("Be happy");
// 	printf("My freind");
// 
// 	return 0;
// }

#pragma endregion

#pragma region ����ڸ� �̿��� ���ڿ� ����
	// #include<stdio.h>

// int main(void)
// {
// 	printf("Be happy\n");
// 
// 	printf("12345678901234567890\n");
// 
// 	printf("My\tfreind\n");
// 
// 	printf("goot\bd\tchance\n");
// 
// 	printf("cow\rW\a\n");
// 
// 		return 0;
// }
	// ����ڿ��� ������ ���� ���˴ϴ�.(�̵��ÿ� �̵��ϴ°��� ���ڰ� �����ÿ� �̵��� ���ڷ� ���� ������)
	// \n : �����ٷ� �̵� \b �� ĭ �������� �̵� 
	// /r : �Ǿ����� �̵� \a : ���Ҹ�

#pragma endregion

#pragma region ������ �Ǽ��� ��� 
	//#include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", 10);
// 	printf("%lf\n", 3.4);
// 	printf("%.1lf\n", 3.45);
// 	printf("%.10lf\n", 3.4);
// 
// 	printf("%d�� %d�� ���� %d�Դϴ�. \n", 10, 20, 10 + 20);
// 	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);
// 
// 	return 0;
// 
// // ��ȯ���� or ���������ڶ���ϸ� %c�� ���� %d�� ���� %f �Ǵ� %lf �� �Ǽ��� �ǹ��մϴ�.
// // %lf�� �Ǽ��� ����ϸ� �Ҽ��� ���� ����° �ڸ� ���� ��µ˴ϴ�.
// // ���� %.1lf ������� �Ҽ��������� ù° �ڸ����� ����̵ǰ� ��°���ʹ� �ݿø��� ���ϴ�
// // �̶� �Ҽ����� �ڸ����� �ٲٷ��� %�� lf ���̿� �Ҽ����� ��� �ڸ����� �����ؾ��մϴ�.
// }

#pragma endregion

#pragma region ���� Ǯ��
// int main(void)
// {
// 	/*
// 	printf("Hello World!\n);
// 	*/
// 	printf("Be\rHappy!\nBaby");
// 
// 		return 0;
// }

 // �� Happy!
	// baby �����´�.
#pragma endregion

#pragma endregion

#pragma region ����� ������ ǥ�����
	// ���(constant)��? ������ �ʴ� ���� ���մϴ�.
	// ����) �¾ �ð�, �¾ ���, �����ڹ迭���...

#pragma region (3)���� ������ ������ ���
	// include <stdio.h>
	 
// int main(void)
// {
// 	printf("%d\n", 12); // 10���� ���� ��� ���
// 	printf("%d\n", 014); // 8���� ���� ��� ���
// 	printf("%d\n", 0xc); // 16���� ���� ��� ���
// 
// 		return 0;
//  10������ 8������ 16������ ����ϴ¹��
//	8������ ����ҷ��� %o, 16���� �ҹ��ڷ� ����Ϸ��� %x, �빮�ڷ� ����Ϸ��� %X��
//	����ϸ� �˴ϴ�.
//  Ex) 
//	printf("%o\n", 12);
//	printf("%x\n", 12);
//	printf("%X\n", 12);
// 
// }

#pragma region ���� ������ �Ǽ� ���
	//#include <stdio.h>

// int main(void)
// {
// 	printf("%.1lf\n", 1e6);         // ���� ������ �Ǽ��� �Ҽ��� ���·� ���
// 	printf("%.7lf\n", 3.14e-5);	    // �Ҽ��� ���� �ϰ�° �ڸ����� ���
// 	printf("%le\n", 0.0000314);		// �Ҽ��� ������ �Ǽ��� ���� ���·� ���
// 	printf("%.2le\n", 0.0000314);	// ���� ���·� �Ҽ������� ��° �ڸ����� ���
// 
// 	return 0;
// }

#pragma endregion

#pragma region ���ڿ� ���ڿ� �������� ���
	// #include <stdio.h>

// int main(void)
// {
// 	printf("%c\n", 'A');	 // ���� ��� ���
// 	printf("%s\n", "A");	 // ���ڿ� ��� ���
// 	printf("%c�� %s �Դϴ�.\n", '1', "first");	// ����(%c) �� ���ڿ�(%s)�� �Բ� ���
// 
// 	return 0;
// }


#pragma endregion


#pragma endregion


#pragma endregion

#pragma region ������ ����� ���
	// ������ �����Ҷ��� ����� �ڷ���(���ڴ� char... ������ int... �Ǽ��� float,double...)�� �����ϰ� 
	// ���Ŀ� ������ ���� �����ָ�ȴ�. ���÷� int bot, int a, float Tex ���..
	// '='�� ���п����°��ٶ�� ǥ�������� 
	// ���α׷������� '='���Կ����ڶ���Ѵ�.
	// ���Կ�����(=)�� ������ ���� ���ʿ� ����(�Ҵ�)�Ѵٴ� �ǹ��̴�.

	//������ ���� �н��غ���.
// int main(void)
// {
// 	int a;	      // int �� ���� a����
// 	int b, c;	  // 2���� int�� ���� b, c �� ���ÿ� ����
// 	double da;	  // double�� ���� da ����
// 	char ch;	  // char�� ���� ch ����
// 
// 	a = 10;	      // int�� ���� a�� ���� 10�� ����
// 	b = a;		  // int�� ���� b�� ���� a�� ���� ����
// 	c = a + 20;	  // int�� ���� c�� ���� a�� ���� ���� 20�� ���� ������
// 	da = 3.5f;	  // double�� ���� da�� �Ǽ� 3.5 ����
// 	ch = 'A';	  // char�� ���� ch�� ���� 'A' ����
// 
// 	printf("���� a�� �� : %d\n", a);
// 	printf("���� b�� �� : %d\n", b);
// 	printf("���� c�� �� : %d\n", c);
// 	printf("���� da�� �� : %.1lf\n", da);
// 	printf("���� ch�� �� : %c\n", ch);
// 
// return 0;
// }

#pragma endregion

#pragma region char�� ������ ���
	//#include <stdio.h>

// int main(void)
// {
// 	char ch1 = 'A';  // ���ڷ� �ʱ�ȭ. ����� ���� ������ �ƽ�Ű �ڵ� ��
// 	char ch2 = 65;	 // ���� 'A'�� �ƽ�Ű �ڵ� ���� �ش��ϴ� ������ �ʱ�ȭ
// 
// 	printf("����%c�� �ƽ�Ű �ڵ� �� : %d\n", ch1, ch2);
// 	printf("�ƽ�Ű �ڵ� ���� %d�� ���� : %c\n", ch2, ch1);
// 
// 	return 0;
// }

#pragma region �������� ������ ����
	//#include<stdio.h>

 // int main(void)
 // {
 // 	short sh = 32767;					//short�� �� �ִ� �ʱ�ȭ
 // 	int in = 2147483647;				//int�� �� �ִ� �ʱ�ȭ
 // 	long ln = 2147483647;				//long�� �� �ִ� �ʱ�ȭ
 // 	long long lln = 123451234512345;	//���� ū �� �ʱ�ȭ
 // 
 // 	printf("short�� ���� ��� : %d\n", sh);
 // 	printf("int�� ���� ��� : %d\n", in);
 // 	printf("long�� ���� ��� : %ld\n", ln);
 // 	printf("longlong�� ���� ��� : %lld\n", lln);	//long long ���� lld �� ���
 // 	
 // 	printf("longlong���� ũ�� : %d����Ʈ\n", sizeof(long long));  //�ڷ����� ũ�⸦ �˾Ƴ��� sizeof ������
 // 		//���� ����ϴ� �����Ϸ����� ������ �ڷ����� ũ�Ⱑ �ñ��ϸ� sizeof �����ڷ� Ȯ���Ҽ��ִ�.
 // 		//sizeof�� �ڷ����� ũ�⸦ ����Ʈ ������ ������ָ� ���� ���� ����ϸ� �ȴ�.
 // 	return 0;
 // }


#pragma endregion

#pragma region unsigned�� �߸� ����� ���
	// #include <stdio.h>

// int main(void)
// {
// 	unsigned int a;
// 
// 	a = 4294967295;		// ū ��� ����
// 	printf("%d\n", a);	// %d�� ���
// 	a = -1;				// ���� ����
// 	printf("%u\n", a);	// %u�� ���
// 
// 	return 0;
// }
// ����ؾߵ���. unsigned �ڷ����� ������ �׻� ����� �����ϰ� ���������ڴ� %u�� ����Ѵ�.
#pragma endregion


#pragma endregion

#pragma region �Ǽ� �ڷ���(��ȿ ���� Ȯ��)
	// include <stdio.h>

// int main(void)
// {
// 	float ft = 1.234567890123456789;	// ��ȿ ���ڰ� ���� ������ �ʱ�ȭ.
// 
// 	double db = 1.234567890123456789;
// 
// 	printf("float�� ������ �� : %.20f\n", ft);
// 	printf("double�� ������ �� : %.20lf\n", db);
// 
// 	return 0;
// }

	// ��°��� �ʱ갪�� �ٸ����� : ��ǻ�Ϳ��� �Ǽ��� ǥ���ϴ� ����� ������ �����ֱ� �����̴�.
	// float ���� ��ȿ ���� 7�ڸ� double���� 15�ڸ��� �������� ���� ����ϴ°� �����ϴ�.
	
	// ��ȿ���ڸ� ����ذ��� ���α׷����ϴ°��� ����ٸ� ���� 2���� ����� �������
	// 1��° �������� �⺻���� ����ϰ� ���ʿ��� ��쿡�� �Ǽ����� �������.
	// 2��° �Ǽ����� ��ȿ���ڰ� ���� double���� �⺻���� ����մϴ�.

#pragma endregion

#pragma region char �迭�� ���ڿ� ����
	// include <stdio.h>

// int main(void)
// {
// 	char fruit[20] = "starwberry";				 // char �迭 ����� ���ڿ� �ʱ�ȭ.
// 
// 	printf("���� : %s\n", fruit);				 // �迭������ ����� ���ڿ� ���
// 	printf("������ : %s %s\n", fruit, "jam");	 // ���ڿ� ����� ���� %s�� ���
// 
// 	return 0;
// }

// ���ڿ��� char���� �迭 ���·� ����� �����ϸ� %s�� ��µȴ�.

#pragma region char �迭�� ���ڿ� ����
	// include <stdio.h>
	// include <string.h>	// ���ڿ��� �ٷ� �� �ִ� string.h ��� ���� ����

// int main(void)
// {
// 	char fruit[20] = "strawberry";	// strawberry�� �ʱ�ȭ
// 
// 	printf("%s\n", fruit);			// strawberry�� ���
// 	strcpy(fruit, "banana");		// fruit�� banana ���� strcpy�Լ��� string copy�� ���Ӹ��� ���ڿ��� �����Ѵ�.
// 	printf("%s\n", fruit);			// banana ���
// 
// 	return 0;
// 
// }
#pragma endregion


#pragma endregion


#pragma region if�� �����ϱ�

// void main()
// {
// 	int art = 'A';
// 
// 	if (art == 'B')
// 	{
// 		printf("����� ������ B�Դϴ�.\n");
// 	}
// 	else if (art == 'A')
// 	{
// 		printf("����������� A�Դϴ�.\n");
// 
// 	}
// 	else
// 	{
// 		printf("����� ������ �˼��� �����ϴ�.\n");
// 	}
// }

#pragma endregion

#pragma region switch ~ case �� Ȱ��
// int main(void)
// {
// 	int rank = 2, m = 0;
// 
// 	switch (rank)
// 	{
// 	case 1:
// 		m = 300;
// 		break;
// 		
// 	case 2:
// 			m = 200;
// 			break;
// 	case 3:
// 		m = 100;
// 		break;
// 	default:
// 		m = 10;
// 		break;
// 	}
// 	printf("m: %d\n", m);
// 
// 	return 0;
// }
#pragma endregion
