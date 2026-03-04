#include<iostream>
using namespace std;

int main(){
	int marks;
	cout<<"Please enter marks\t";
	cin>>marks;
	
	if(marks > 100 || marks < 0){
		cout<<"Invalid Marks";
	}
	
	if(marks >= 80 && marks <= 100){
		cout<<"Grade: A";
	}	
	if(marks >= 60 && marks < 80){
		cout<<"Grade: B";
	}
	if(marks >= 50 && marks < 60){
		cout<<"Grade: C";
	}
	
	if(marks < 50){
		cout<<"Fail";	
	}
}
