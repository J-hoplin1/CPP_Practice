#include<iostream>

int main()
{
	char name1[10];
	char name2[5];
	
	std::cout<<"이름1 작성 : ";
	std::cin>>name1;
	
	std::cout<<"이름2 작성 : ";
	std::cin>>name2;
	
	std::cout<<"입력된 이름1 : "<<name1<<" 입니다."<<std::endl;
	std::cout<<"입력된 이름2 : "<<name2<<" 입니다."<<std::endl;
	
	return 0;
}