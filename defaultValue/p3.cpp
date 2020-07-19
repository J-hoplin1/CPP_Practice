#include<iostream>


//Default Value를 선언하는 동시에, 만약 함수 원형을 별도로 선언하게 되는 경우, 디폴트 값은 함수 원형에서만 선언해 주어야 한다.
int Adder(int num1 = 10, int num2 = 20);


int main()
{
	std::cout<<Adder()<<std::endl;
	std::cout<<Adder(5)<<std::endl;
	std::cout<<Adder(40,50)<<std::endl;
	return 0;
}

//쉽게 생각하면 된다. 함수 원형의 선언은 주로 함수가 main()함수에 비해 뒤에 선언되는 경우에 선언을 해준다.
//그렇기에, 만약 함수 원형을 선언안해준 상태에서 main함수를 컴파일 한다면 10,11,12줄이 오류가 날 것이다.
int Adder(int num1,int num2){
	return num1 + num2;
}