#include<iostream>


void swap(int *a,int *b)
{
	int swapper = *a;
	*a = *b;
	*b = swapper;
}

void swap(char *a,char *b)
{
	char swapper;
	swapper = *a;
	*a = *b;
	*b = swapper;
	
}


int main()
{
	int num1 = 20,num2 = 30;
	swap(&num1,&num2);
	std::cout<<"num1 : "<<num1<<" num2 : "<<num2<<std::endl;
	
	char c1 = 'A', c2 = 'B';
	swap(&c1,&c2);
	std::cout<<"char1 : "<<c1<<" char2 : "<<c2<<std::endl;
	return 0;
}