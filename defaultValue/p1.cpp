//C++ 함수에는 디폴트 값이라는 것이 있다. 디;폴트 값이란 기본적으로 설정되어있는 값들을 의미한다.

#include<iostream>


int Function1(int num = 7)
{
	return num;
}

int Function2(int num1 = 2,int num2 = 3)
{
	return num1 + num2;
}
int main()
{
	std::cout<<"Call Function1 : " <<Function1()<<std::endl;
	std::cout<<"Call Function2 : " <<Function2()<<std::endl;
	return 0;
}