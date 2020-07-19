// C언어에서 사용했던 scanf를 사용해 보자.

#include<iostream>

int main()
{
	int val1;
	std::cout<<"첫번째 숫자 입력하기 : ";
	std::cin>>val1;
	
	//키보드로부터 데이터 입력을 위해서는 다음의 형식을 취하면 된다.
	
	// std::cin>>'변수'
	// '변수'의 위치에는 키보드로부터 입력받은 데이터를 저장할 변수의 이름이 온다.
	// C++에서는 데이터 입력도 데이터 출력과 마찬가지로 별도의 포맷 지정이 필요없다. 저장할 변수의 포맷만 맞춰주면 된다.
	int val2;
	std::cout<<"두번째 숫자 입력하기 : ";
	std::cin>>val2;
	
	int result = val1 + val2;
	std::cout<<"두 숫자 덧셈 결과 : "<<result<<std::endl;
	return 0;
}