#include<iostream>
using namespace std;

int main(){
    // -276447231, 276447231
	int num; 
	// positive limit: 2147483647
	// negative limit: -2147483648
	// 2147483647, -2147483648, -2147483647, ...-1, 0, 1, ....., 2147483646, 2147483647,-2147483648 
	num = 4294967298;
	cout<< "Number of Bytes in Integer: "<<sizeof(num)<<endl;
	cout<<"Value of Num: "<<num<<endl;
	
	short int short_num;
	cout<<"Number of Bytes in Short Int:"<<sizeof(short_num)<<endl;
	
	long int long_num;
	cout<<"Number of Bytes in Long Int:"<<sizeof(long_num)<<endl;

	double double_num = 4294967298;
	cout<<"Number of Bytes in Double Int:"<<sizeof(double_num)<<endl;
	cout<<"Value of Double Num:"<< double_num<<endl;
	
	long double long_double_num;
	cout<<"Number of Bytes in Long Double Int:"<<sizeof(long_double_num)<<endl;
		
}
