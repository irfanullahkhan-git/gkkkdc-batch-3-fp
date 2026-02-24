#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	int result; 
	
	num1 = 5;
	num2 = 10;
	
	result = num1 + num2;	
	cout<<"Result: "<<result<<endl;
	
	result = result - num1;
	cout<<"Result: "<<result<<endl;
	
	result = result + num2;
	cout<<"Result: "<<result<<endl;
	
	result = result + num2 + num2;
	cout<<"Result: "<<result<<endl;
	
	num1 = num1 + num2;
	result  = result + (result - num1);
	cout<<"Result: "<<result<<endl;
	
}
