// namespace : 이름공간을 사용하는 이유 - 프로젝트의 규모가 커짐에 따라서 변수 및 클래스 명 충돌을 방지하기 위해서이다.

#include<iostream>

namespace comp1
{
	int simpleFunc(int x)
	{
		return x * x;
	}
}


namespace comp2
{
	int simpleFunc(int x)
	{
		return x + x;
	}
	
}


int main()
{
	
	// :: 연산자 : 범위지정연산자 라고 호칭한다.(scope resolution operator) 이름공간을 지정할 때 사용하는 연산자이다.
	std::cout<<"comp1의 simpleFunc"<<" "<<comp1::simpleFunc(10)<<std::endl;
	std::cout<<"comp2의 simpleFunc"<<" "<<comp2::simpleFunc(20)<<std::endl;
	return 0;
}