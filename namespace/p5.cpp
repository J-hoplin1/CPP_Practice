#include <iostream>

// using을 사용하여 이름 공간을 명시해줄 수 있다.

// 지역변수와 같이 선언시 해당 블럭, 지역 외에서는 효력이 없다. 프로그램 전체에 영향을 주기 위해서는 전역변수와 마찬기지로 함수 밖에 선언을 해주어야한다.

using namespace std;

int main(void)
{
	int num = 20;
	int num2, num3;
	cout<<"Hello word"<<endl;
	cout<<"값 입력하기 : ";
	cin>>num2>>num3;
	cout<<"세수의 합 : "<<num + num2 + num3<<endl;
}