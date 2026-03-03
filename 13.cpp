#include<iostream>
using namespace std;

int main(){
	int n1, n2;
	bool b;
	
	cout<<"Enter first number: ";
	cin>>n1;
	
	cout<<"Enter second number: ";
	cin>>n2;
	
	b = n1 > n2;
	
	if(b){	
		cout<<"n1 is greater";
	}
	
	if(!b){
		cout<<"n2 is greater.";
	}
	
} 
