#include <stdio.h>
int main() 
{
    int i = 1;
    int j = 2;

    if (i < j || i == 3) 
    { // 단축평가에서 'i = 3'이 실행되지 않음
        printf("%d\n", i); // 출력: 1
    }
}