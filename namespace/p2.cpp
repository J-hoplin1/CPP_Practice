//이름공간 기반의 함수 선언과 정의 구분

// 함수 : 선언과 정의를 분리하는것이 일반적

// 선언 -> 헤더파일에 저장

// 정의 -> 소스파일에 저장

#include<iostream>

namespace comp1
{
	void simp1(); 
}

namespace comp2
{
	void simp1();
}

// namespace 안에 각 이름 공간 내에 선언할 함수들에 대해서 함수 원형(prototype) 만 선언해준 상태이다.

int main(){
	comp1::simp1();
	comp2::simp1();
	return 0;
}

void comp1::simp1()
{
	std::cout<<"comp1 내에서 실행되는 simp1"<<std::endl;
}

void comp2::simp1()
{
	std::cout<<"comp2 내에서 실행되는 simp1"<<std::endl;
}