#include<iostream>
using namespace std;

int main(){
	
//	for(int index = 1; index < 10; index++){
//		
//		for(int i= 0; i < 5; i++){
//			cout<<"*";
//		}
//		
//		cout<<endl;
//	}

//	for(int index = 1; index < 10; index++){
//		
//		for(int i= 0; i < 5; i++){
//			cout<<i;
//		}
//		
//		cout<<endl;
//	}

//	for(int index = 1; index < 10; index++){
//		
//		for(int i= 0; i < 5; i++){
//			cout<<index;
//		}
//		
//		cout<<endl;
//	}

//	for(int index = 1; index < 10; index++){ // rows
//		
//		for(int i= 0; i < index; i++){ // col
//			cout<<"*";
//		}
//		
//		cout<<endl;
//	}
	
//	for(int index = 10; index > 0; index--){ // rows
//		
//		for(int i = 0; i < index; i++){ // col
//			if( index % 2 == 0){
//				cout<<"*";
//			}else{
//				cout<<"#";
//			}
//		}
//		
//		cout<<endl;
//	}


//	for(int index = 0; index < 10; index++){
//		
//		for(int i = 0; i < index; i++){
//			cout<<" ";
//		}
//		
//		for(int j= 10; j > index; j--){
//			cout<<"*";
//		}
//		cout<<endl;
//	}

	for(int index = 0; index < 10; index++){
		
		for(int j= 10; j > index; j--){
			cout<<" ";
		}
		
		for(int i = 0; i < index; i++){
			cout<<"*";
		}
			
		cout<<endl;
	}


	
	
}
