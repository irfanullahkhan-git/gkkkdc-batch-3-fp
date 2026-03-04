#include<iostream>
using namespace std;

int main(){
	int n1 = 10;
	int n2 = 138;
	
	n1 = n1 + n2; // 148
	n2 = n1 - n2; // 10
	n1 = n1 - n2; // 138
	
	cout<<n1<<endl; // 138
	cout<<n2<<endl; // 10
}
