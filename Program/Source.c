#include <stdio.h>


int main()
{
	char arr[3][7] = { "가나다","Noxus","포인터" };
	char(*data)[7];
	
	data = arr;

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *(data + i));
	}


	return 0;
}