/*

memset함수를 사용하면 메모리의 내용을 원하는 크기만큼 특정값으로 설정할 수 있다.

memset의 목적은 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로 모두 지정하고 싶을떄 사용하는 함수이다.

기본적인 매개변수

void *memset(void *ptr, int value, size_t num)

ptr : 채우고자 하는 메모리의 시작 포인터(시작주소)
value : 메모리에 채우고자 하는 값, int형이지만 내부에서는 unsigned char(1바이트)로 변환되어 저장
num : 채우고자 하는 바이트수, 즉 채우고자 하는 메모리의 크기. 이 num 에 들어가는 것은 배열 개수가 아니라 배열의 전체 크기가 된다. 사실상 받는 값은 int지만 char 이라고 봐도된다.

memset()이 쓰이는 경우는 언제일까?

특정값 한개로 배열의 요소를 초기화할때 유용하게 쓰인다. 단 int형은 0,-1아니면 웬만하면 

#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
    char arr[10];
    memset(arr,'A',sizeof(char) * 10);
    printf("%s\n",arr);
    return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main (){
	long long *numptr = malloc(sizeof(long long));
	memset(numptr, 0x27, sizeof(long long));
	printf("0x%llx\n", *numptr); // %llx : long long 값을 16진수로 출력한다.
	free(numptr);
	return 0;
}
