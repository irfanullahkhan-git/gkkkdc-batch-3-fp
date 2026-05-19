#include<iostream>
using namespace std;
void print(int);
 
int main(){
	int n1=1;
	print(n1);	
}

void print(int n){
	// Recursion
	if(n < 10){ // base condition, termination
		cout<<n<<endl;
		n++;
		print(n);
	}
}
