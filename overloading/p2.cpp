#include<iostream>

void Func1(char *a)
{
	std::cout<<a<<std::endl;
	std::cout<<"Func1(char *a) called"<<std::endl;
}

void Func1(int ch)
{
	std::cout<<"Func1(int ch) called"<<std::endl;
}

void Func1(int a, int b)
{
	std::cout<<"Func1(int a, int b) called"<<std::endl;
}


int main()
{
	char a[20] = "Hello World";
	Func1(1,2);
	Func1(a);
	Func1(1);
	return 0;
}