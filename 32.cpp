#include<iostream>
using namespace std;


int main(){
	int num;
	cout<<"Please enter a number to reverse: ";
	cin>>num;
	
	cout<<"Original Number: "<<num<<endl;
	
	int reverse = 0;
	int rem = 0;
	while(num > 0){
		rem = num % 10;
		reverse = (reverse * 10) + rem;
		num = num / 10;		
	}
	
	cout<< "Reverse Number: "<<reverse;
	
}
