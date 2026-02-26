#include<iostream>
using namespace std;

int main(){
	int num = 10;
	float f= 10.5;
	char ch = 'A';
	char ch1 = '1';
	double d = 1523.4587125468;
	bool b = true;
	
	
	int n1, n2, n3;
	n1 = 10, n2 = 15, n3 = 3;
	
	int result = n1 + n2 - n3 + n1;
	cout<<result<<endl;
	
	result = n1 - n2 + (n1 * n3 - n2 / n1) + n1 % n3;
	cout<<result<<endl;
	
	result = (n1 - n2 + (n1 * n3 - n2 / n1) + n1 % n3) * ( n1 + n3 % n2 + n1) * (n3 - n3);
	cout<<result<<endl;
	
	
	
}
