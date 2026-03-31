#include<iostream>
using namespace std;

int main(){
	char alphabet;
	
	cout<<"Please enter an alphabet\n";
	cin>>alphabet;
	
	switch(alphabet){
		case 'a':
			cout<<"you enterd a, and this is a ";
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout<<"Vowel\n";
			break;
		default:
			if(int(alphabet) >=  97 && int(alphabet) <= 122){
				cout<<"Consonant\n";	
			}else{
				cout<<"Please enter a valid small alphabet";
			}
	}
	
	
	
	
	
	
	
	
	
	
	
}
