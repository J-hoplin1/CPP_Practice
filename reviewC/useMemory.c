/*
메모리 사용을 위해서는 malloc함수로 사용할 메모리 공간을 확보해야한다.
malloc 은 memory allocation의 약자이며, stdlib.h 헤더에 선언되어있다.
이는 다른 말로 동적할당 이라고도 부른다
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int num = 20;
	int *numptr1;
	numptr1 = &num;
	
	int *numptr2;
	numptr2 = malloc(sizeof(int)); //int의 크기 4바이트 만큼 동적 메모리 할당한다.
	printf("%p\n", numptr1);  //%p : 주소를 16진수 형태로 출력
	printf("%p\n", numptr2);
	free(numptr2); // 동적 할당한 메모리는 꼭 해제한다.
	// 변수는 stack에 생성되고 malloc함수는 힙 부분의 메모리를 사용한다.
}