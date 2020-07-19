#include<iostream>

int main()
{
	int sum = 0;
	int bufferInt = 0;
	for(int c = 0;c < 5;c++)
	{
		std::cout<<c+1<<"번째 정수 입력 : ";
		std::cin>>bufferInt;
		sum += bufferInt;
	}
	std::cout<<"합계: "<<sum<<std::endl;
	return 0;
}