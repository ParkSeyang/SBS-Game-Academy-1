#include <stdio.h>
int main() 
{
    int i = 1;
    int j = 2;

    if (i < j || i == 3) 
    { // �����򰡿��� 'i = 3'�� ������� ����
        printf("%d\n", i); // ���: 1
    }
}