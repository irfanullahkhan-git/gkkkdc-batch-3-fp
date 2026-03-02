#include<iostream>
using namespace std;

int main(){
	int n1, n2;
	
	n1 = (n2 = 5, n2 + 4, n2 + 3);
	// n2 = 5;
	// n1 = n2 + 4 => 5 + 4 = 9
	// n1 = n2 + 3 => 5 + 3 = 8
	cout<<"n1 = "<<n1<<endl;	
	cout<<"n2 = "<<n2<<endl;
	
	n1 = (n2 = 5, n2 + 4, n2 + 3, n2 = 10);
	// n1 = n2 = 10
	cout<<"n1 = "<<n1<<endl;	
	cout<<"n2 = "<<n2<<endl;	
}

