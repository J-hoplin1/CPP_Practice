// 함수의 오버로딩 : 함수이름은 동일하지만 매개변수가 다른 경우.


#include<iostream>

int Func1(int num)
{
	num++;
	return num;
}

int Func1(int num1, int num2)
{
	return num1 + num2;
}

int main()
{
	std::cout<<"Original Func1 : "<<Func1(12)<<std::endl;
	std::cout<<"Overloading Func1 : "<<Func1(12,13)<<std::endl;
	
	return 0;
}