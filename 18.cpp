#include<iostream>
using namespace std;

int main(){
	int n1 = 10;
	int n2 = 138;
	int n3;
	
	n3 = n1;
	n1 = n2;
	n2 = n3;
	
	
	
	cout<<n1<<endl; // 138
	cout<<n2<<endl; // 10
}
