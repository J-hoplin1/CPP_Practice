#include<iostream>
#define SQUARE(x) ((x)*(x))

int main()
{
	//인라인 함수의 장점 : 실행속도 면에 있어서 이점을 가져간다
	//인라인 함수의 단점 : 복잡한 함수의 경우에는 매크로 정의하는데에 있어서 한계가 있다.
	
	std::cout<<SQARE(10)<<std::endl;
	return 0;
}