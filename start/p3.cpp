#include<iostream>

int main()
{
	int val1,val2;
	int result = 0;
	std::cout<<"두개의 정수 입력 : ";
	std::cin>>val1>>val2;
	
	if(val1 < val2)
	{
		for(int a = val1 + 1;a < val2;a++)
		{
			result += a;
		}
		
		std::cout<<val1<<"과 "<<val2<<"사이 값들의 합 : "<<result<<std::endl;
	}
	else
	{
		for(int a = val2 + 1;a < val1;a++)
		{
			result += a;
		}
		std::cout<<val1<<"과 "<<val2<<"사이 값들의 합 : "<<result<<std::endl;
	}
}