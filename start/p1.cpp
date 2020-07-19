// C++에서는 개발자가 정의한게 아닌 표준 헤더파일 선언에 대해서는 확장자를 생략하기로 약속되어있다.

#include <iostream>

int main()
{
	// '<<'도 사실 연사자이다. 이 연산자를 이용하면 둘 이상의 출력대상을 연이어서 출력 할 수 있다.
	int num = 10;
	//std::endl 은 개행으로 이어진다. 개행 == '\n'
	std::cout<<"Hello World"<<std::endl;
	std::cout<<"Hello "<<"World"<<std::endl;
	//C++도 데이터의 성격에 따라 적절히 출력한다.
	std::cout<<num<<' '<<'A';
	std::cout<<' '<<3.14<<std::endl;
	return 0;
}