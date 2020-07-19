#include<iostream>
#define MAXLEN 100


int main()
{
	char name[MAXLEN];
	char phoneNumber[MAXLEN];
	
	while(1)
	{
		std::cout<<"이름 입력하기 : ";
		std::cin>>name;
		
		std::cout<<"전화번호 입력하기 : ";
		std::cin>>phoneNumber;
		
		std::cout<<"이름 : "<<name<<std::endl;;
		std::cout<<"전화번호 : "<<phoneNumber<<std::endl;
	}
	return 0;
}