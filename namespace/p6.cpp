#include <iostream>

// 이름공간이 많이 중첩되는경우(이럴일은 거의 없다) 별칭을 주어서 이름공간을 부를 수 있다.

using namespace std;

namespace A
{
	namespace B
	{
		namespace C
		{
			int num = 10;
			int num2 = 20;
		}
	}
}

int main(void)
{
	namespace ABC = A::B::C;
	cout<<ABC::num<<endl;
	cout<<ABC::num2<<endl;
	cout<<"두수의 합 : "<<ABC::num + ABC::num2<<endl;
}