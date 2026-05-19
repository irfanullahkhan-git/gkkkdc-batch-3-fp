#include<iostream>
using namespace std;

int main(){
	
	int count = 0;
	my_print:
	cout<<"Hello World\n";	
	count++;
	if(count < 10){
		goto my_print;
	}
	
}
