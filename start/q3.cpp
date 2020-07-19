#include<iostream>

int main()
{
	int mult = 0;
	
	std::cout<<"몇단을 출력할지 입력 : ";
	std::cin>>mult;
	
	for(int c = 1;c < 10;c++)
	{
		std::cout<<mult<<" x "<<c<<" = "<<mult * c<<std::endl;
	}
	return 0;
}