#include<iostream>
using namespace std;

int main(){
	
	for(int i = 0; i < 10; i++){
		cout<<"Hello World\n";
		i++;
		i++;
	}
	cout<<"---------------- \n";
	
	for(int i = 10; i > 0; i--){
		cout<<"Second Loop\n";
		i--;
	}
	
	cout<<"---------------- \n";
	
	for(int i = 0; i < 10; i++){
		cout<<"Third Loop\n";
		i = 10;
	}

	cout<<"---------------- \n";
	
	for(int i = 0; i < 10; i++){
		cout<<"Fourth Loop\n";
		if(i < 7){
			i++;
		}
	}
	
	cout<<"---------------- \n";
	
	for(int i = 0; i < 10; i++){
		cout<<"Fifth Loop\n";
		if(i % 2 == 0){
			i++;
		}
	}	
		
	
}
