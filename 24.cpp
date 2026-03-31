#include<iostream>
using namespace std;

int main(){
	char alphabet;
//	consonant or vowel
	cout<<"Please enter an alphabet: \t";
	cin>>alphabet;
	cout<<"Code of "<<alphabet<<" is "<< (int)alphabet<<endl;
	
	
	if(
		alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'
		|| alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U'
	) {
		cout<<"The alphabet is vowel";	
	}else{
		cout<<"The alphabet is consonant";
	}
	
	
}
