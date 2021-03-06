/*

만약 배열에 대해 인덱싱을 하였는데
그 인덱스가 존재하지 않는경우는 어떻게될까?

C언어는 파이썬과 달리 음수를 통한 인덱싱이 불가능하다.
그리고 파이썬과 달리 C언어는 인덱스를 벗어난 인덱스를 지정해도
컴파일 에러가 나지 않는다.

그 이유는 벗어난 인덱스에 대해서는 쓰레기값을 출력하기 때문이다.

*/

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    printf("%d\n",arr[2]); //3
    printf("%d\n",arr[-2]); // 쓰레기값
    printf("%d\n",arr[30]); // 쓰레기값
    return 0;
}
