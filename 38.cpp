#include<iostream>
using namespace std;

int main(){
	int num = 10;
	int & ref = num;
	ref++;
	int num2 = 20;
	ref = num2;
	num2++;
	cout<<num<<endl;
	int & ref2 = num2;
	ref2 = ref;
	ref = 50;
	cout<<ref2<<endl;
	
	int num3 = 100;
	int & ref3 = num3;
	num3++;
	cout<<ref3<<endl; // 101
	
	int num4 = 4;
	int &ref4 = num4;
	int &ref5 = ref4;
	ref5++;
	cout<<"ref5: "<<ref5<<endl;
	cout<<"ref4: "<<ref4<<endl;	
	
	num4 = ref4 + ref5 + num4;
	cout<<"ref5: "<<ref5<<endl;
	
	 
	
}
