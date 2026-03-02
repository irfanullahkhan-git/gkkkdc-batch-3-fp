#include<iostream>
using namespace std;

int main(){
	int n1 = 10;
	int n2 = 15;
	
	cout<< (n1 < n2) << endl;
	
	n1 = 10;
	n2 = 10;
	
	cout<< (n1 <= n2) << endl; // <= less than OR equal


	n1 = 11;
	n2 = 10;
	
	cout<< (n1 >= n2) << endl; // >= greater than OR equal	
	
	n1 = 10;
	n2 = 10;
	
	cout<< (n1 == n2) << endl; // == equal	


	n1 = 11;
	n2 = 10;
	
	cout<< (n1 != n2) << endl; // != not equal	
}
