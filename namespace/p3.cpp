// 참고로 동일한 이름공간에 정의된 함수를 호출할 때는 이름공간을 명시해줄 필요가 없다.


#include<iostream>

namespace comp1
{
	void simp1(); 
}

 namespace comp1
 {
	 void nameScopeEX();
 }

namespace comp2
{
	void simp1();
}

int main(){
	comp1::simp1();
	comp2::simp1();
	return 0;
}

void comp1::nameScopeEX()
{
	std::cout<<"comp1의 nameScopeEX()"<<std::endl;
}


void comp1::simp1()
{
	//nameScopeEX 또한 comp1의 namescope이므로 따로 이름 공간을 명시해줄 필요가 없다.
	nameScopeEX();
	
	std::cout<<"comp1 내에서 실행되는 simp1"<<std::endl;
}

void comp2::simp1()
{
	comp1::nameScopeEX();//단 여기서는 이 simp1은 namescope가 comp2이다. 즉 다른 이름공간이므로 comp1이름공간의 nameScopeEX()를 호출하기 위해서는 이름공간을 명시해주어야 한다.
	std::cout<<"comp2 내에서 실행되는 simp1"<<std::endl;
}