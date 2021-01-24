// 배열 요소를 모두 0으로 초기화하기

#include <stdio.h>

int main()
{
    int numArr[10] = {0,}; // 이와 같이 하면 지정해준 배열의 크기만큼 0으로 배열이 초기화 된다.
    printf("%d\n", *numArr);
    printf("%d\n",numArr[9]);
    return 0;
}
