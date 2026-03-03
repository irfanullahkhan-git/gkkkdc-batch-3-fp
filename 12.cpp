#include<iostream>
using namespace std;

int main(){
	int n1, n2, n3;
	n1 = 10;
	n2 = 15;
	n3 = 20;
	bool b;
	
	b = (n1 < n2) && (n1 <= n3);
	cout<<"b ki value: "<< b << endl;
	
	b = (n1 > n2) || (n1 <= n3);
	cout<<"b ki value: "<< b << endl;
	
	b = !(n1 < n2) && !!(n1 <= n3);
	cout<<"b ki value: "<< b << endl;
	
	
}
