// namespace의 중첩
#include <iostream>

namespace P
{
	int num = 2;
	namespace sub1{
		int num = 3;
	}
	namespace sub2{
		int num = 4;
	}
}

int main(void)
{
	// :: -> 범위지정 연산자이다.이름공간을 지정할때 사용되는 연산자이다.
	std::cout<<P::num<<std::endl;
	std::cout<<P::sub1::num<<std::endl;
	std::cout<<P::sub2::num<<std::endl;
}