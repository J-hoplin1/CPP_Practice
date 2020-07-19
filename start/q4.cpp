#include<iostream>

int main()
{
	int soldPrice = 0;
	
	while(1)
	{
		std::cout<<"판매 급액을 만원단이로 입력하기 : ";
		std::cin>>soldPrice;
		
		if(soldPrice == -1)
		{
			std::cout<<"프로그램을 종료합니다."<<std::endl;
			break;
		}
		else
		{
			int totalMoey = (soldPrice * 0.12) + 50;
			std::cout<<"이번달 급여 : "<<totalMoey<<"만원"<<std::endl;
		}
	}
}