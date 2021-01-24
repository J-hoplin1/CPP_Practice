/*
배열이 차지하는 전체 공간의 크기는 (배열의 자료형) * (배열의 크기) 이다.

반대로 순수 배열의 크기를 구하기 위해서는 (배열이 차지하는 전체 공간의 크기) / (배열의 자료형 크기) 가 된다.
*/

#include <stdio.h>

int main()
{
    int numArr[10] = {11,22,33,44,55};

    printf("배열이 차지하는 전체 공간의 크기 : %d\n",sizeof(numArr));
    printf("배열의 순수 크기 : %d\n", sizeof(numArr) / sizeof(int));
    return 0;
}
