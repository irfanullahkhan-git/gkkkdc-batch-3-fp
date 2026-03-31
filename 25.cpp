#include<iostream>
using namespace std;

int main(){
	int choice;
	cout<<"\t\tGAME MENU\n";
	cout<<"\t\t 1: Start Game\n";
	cout<<"\t\t 2: Game Settings\n";
	cout<<"\t\t 3: Exit\n";
	
	cin>>choice;
//	
//	if(choice == 1){
//		cout<<"\t\t Game is being loaded\n";
//	}else{
//		if(choice == 2){
//			cout<<"\t\tGame Settings is displayed.\n";
//		}else{
//			if(choice == 3){
//				cout<<"\t\tGame Exit\n";
//			}else{
//				cout<<"Please enter a valid choice\n";
//			}		
//		}	
//	}

	switch(choice){
		case 1:
			cout<<"\t\t Game is being loaded\n";
			break;
		case 2:
			cout<<"\t\tGame Settings is displayed.\n";
			break;
		case 3:
			cout<<"\t\tGame Exit\n";
			break;
		default:
			cout<<"Please enter a valid choice\n";
	}	
	
	
	
	
	
	
	
	
	
	
	
	
}
