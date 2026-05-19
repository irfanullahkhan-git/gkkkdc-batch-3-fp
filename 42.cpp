#include<iostream>
using namespace std;

int main(){
	
	int arr[10];
	int x = 120;
	arr[0] = 10; // 0x100
	arr[1] = 15;
	arr[2] = x;
	arr[3] = 25;
	arr[4] = 30;
	arr[5] = 35;
	arr[6] = 40;
	arr[7] = 45;
	arr[8] = 50;
	arr[9] = 50;
	
	
	//cout<<arr[2]<<endl;
	
	for(int index = 0; index < 10; index++){
		cout<<arr[index]<<endl;
	}
	cout<<endl;
	// arr++; c++ doesnot allow to change this address
	
	// int * ptr = arr; 
	int * ptr = &arr[0];
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
	ptr++;
	cout<<ptr<<endl;
}
