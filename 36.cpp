#include<iostream>
using namespace std;

int main(){
	
	int num = 10;
	int * ptr = &num;

	cout<<"Num = "<<num<<endl;
	cout<<"Num Address = "<< &num <<endl;	
	cout<<"Ptr value = "<< ptr <<endl;
	cout<<"DeReferenced = "<< *ptr<<endl;	
	
	num = 20;
	
	cout<<"New value of num = "<<num<<endl;
	cout<<"Ptr Value = "<< *ptr << endl;


	*ptr = 30;	
	
	cout<<"New value of num = "<<num<<endl;
	cout<<"Ptr Value = "<< *ptr << endl;
	
	int * ptr2 = ptr;
	
	*ptr2 = 40;
	
	cout<<*ptr<<endl;
	cout<<*ptr2<<endl;

	
	
	
}
