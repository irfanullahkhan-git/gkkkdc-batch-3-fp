#include<iostream>
using namespace std;
int sum(int, int);
void printBreak();
void printResult(int);

int main(){
	int n1 = 10, n2	= 20;
	int result = sum(n1, n2);
	printResult(result); // 30
	
	
	result = sum(10, 30);
	printResult(result); // 40
	
	
	result = sum(result, result);
	printResult(result); // 80
	
	result = sum(result, result+10);
	printResult(result); // 170
	
}


int sum(int a, int b){
	int s = a + b;
	return s;
}

void printBreak(){
	cout<<"\n ------------------------------------- \n";
}

void printResult(int r){
	cout<<"Result: "<<r<<endl;
	printBreak();
}
