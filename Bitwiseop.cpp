//Bitwise Operators

#include<iostream>
using namespace std;

int main()
{
	int num1=5; //In Binary 0101
	
	cout<<(num1<<1)<<endl; //10
	
	cout<<(num1>>num1)<<endl; //2
	
	int num2 =0; //In Binary 1000
	cout<<(num1&num2)<<endl; //0
	cout<<(num1|num2)<<endl; //1101 = 13
	
	return 0;
}
