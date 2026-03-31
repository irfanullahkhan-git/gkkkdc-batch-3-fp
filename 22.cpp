#include<iostream>
using namespace std;

int main(){
	int n1, n2, n3;
	cout<<"Please enter three numbers\n";
	cin >> n1 >> n2 >> n3;
	
//	if(n1 > n2 && n1 > n3){
//		cout<< "N1 is the greatest number.";
//	}else{
//		if(n2 > n1 && n2 > n3){
//			cout<<"N2 is the greatest number";			
//		}else{
//			cout<<"N3 is the greatest number";
//		}
//	}
	
	
//	if(n1 > n2 && n1 > n3){
//		cout<< "N1 is the greatest number.";
//	}else if(n2 > n1 && n2 > n3){
//		cout<<"N2 is the greatest number";			
//	}else{
//		cout<<"N3 is the greatest number";
//	}

	if(n1 > n2){
		if(n1 > n3){
			cout<<"N1 is the largest";
		}else{
			cout<<"N3 is the largest";	
		}
	}else{
		if(n2 > n3){
			cout<<"N2 is the largest";
		}else{
			cout<<"N3 is the largest";
		}	
	}
	
	
		
}
