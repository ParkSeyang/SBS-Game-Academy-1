#include <stdio.h>


int main()
{
	char arr[3][7] = { "������","Noxus","������" };
	char(*data)[7];
	
	data = arr;

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *(data + i));
	}


	return 0;
}