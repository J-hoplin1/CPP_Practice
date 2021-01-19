/*

memset함수를 사용하면 메모리의 내용을 원하는 크기만큼 특정값으로 설정할 수 있다.

memset의 목적은 어떤 메모리의 시작점부터 연속된 범위를 어떤 값으로 모두 지정하고 싶을떄 사용하는 함수이다.

기본적인 매개변수

void *memset(void *ptr, int value, size_t num)

ptr : 채우고자 하는 메모리의 시작 포인터(시작주소)
value : 메모리에 채우고자 하는 값, int형이지만 내부에서는 unsigned char(1바이트)로 변환되어 저장
num : 채우고자 하는 바이트수, 즉 채우고자 하는 메모리의 크기

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