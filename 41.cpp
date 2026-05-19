#include<iostream>
using namespace std;
int findFactorial(int);
void printBreaks(int);

int main(){
	int n1=5;
	int fact;
	fact = findFactorial(n1);
	cout<<fact;
}

int findFactorial(int n){
	int temp, result = 1;
	cout<<"################ N = "<<n<<endl;
	if(n > 0){
		temp = findFactorial(n-1);
		result = n * temp;
	}
	
	cout<< "Result= "<<result<<endl;
	cout<<"******************** N = "<<n<<endl;
	return result;
}



