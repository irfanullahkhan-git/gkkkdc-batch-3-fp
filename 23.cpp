#include<iostream>
using namespace std;

int main(){
	int age;
	char citizen;
	
	cout<<"Please enter your age: \t";
	cin>>age;
	
	cout<<"Are you a citizen? (y/n): \t";
	cin>>citizen;
	
	if(age >= 18){
		if(citizen == 'y'){
			cout<<"You are eligible";
		}else{
			cout<<"You are not eligible";
		}
	}else{
		cout<<"You are not eligible";
	}
}
