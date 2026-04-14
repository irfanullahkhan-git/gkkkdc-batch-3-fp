#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int num;
	cout<<"Please enter a number: ";
	cin>>num;
	int count = 0;
	if( num < 2){
		cout<<"Please number greater than 1";
		return 0;
	}
	
	if (num == 2){
		cout<<"Prime";
		return 0;
	}
	
	if(num % 2 == 0){
		cout<< "Composit";
		return 0;
	}
	
	for(int i = 3; i <= sqrt(num); i++){
		
		if(num % i == 0){
			count++;
			break;		
		}
	}
	
	if(count == 0){
		cout<<"Prime Number";
	}else{
		cout<<"Composite";
	}
	
}
