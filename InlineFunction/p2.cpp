//C++기반의  인라인 함수 정의하기

//C++기반의 매크로 함수는 매크로함수의 장점인 속도적 이점을 가져옴과 동시에, 일반함수처럼 정의가 가능하다.


#include<iostream>

inline int SQUARE(int x){return x * x;}

int main()
{
	int lp = 0;
	std::cout<<SQUARE(10)<<std::endl;
	std::cout<<"제곱할 숫자 입력하기 : ";
	std::cin>>lp;
	std::cout<<SQUARE(lp)<<std::endl;
	
	//솔직히 안쓸듯..전처리기에 의한 처리도 아니고 컴파일러에 의한 처리인데...굳이
}