#include<iostream>

int Adder(int num1 = 10, int num2 = 20)
{
	return num1 + num2;
}


int main()
{
	// 이렇게 되는 경우 num1값만 30으로 설정된다. C++에서는 특정 매개변수만 지정해서 값을 변경하는 것은 안된다.
	// 즉 선언된 매개변수의 수보다 적은 수의 인자전달이 가능하다. 그리고 전달되는 인자는 왼쪽에서부터 채워져 나가고, 부족한 부분은 디폴트 값으로 채워지게 된다.
	std::cout<<"Num1 과 Num2의 합 : "<<Adder(30)<<std::endl;
}