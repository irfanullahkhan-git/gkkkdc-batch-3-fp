#include<iostream>
using namespace std;

int main(){
	
	int amount = 0;
	int deposit = 0;
	int withdraw = 0;
	
	cout<<"Welcome to Faisal Bank\n";
	int selection = 0;
	while(selection != 4){
		
		cout<<" 1: Amount Deposit\n 2: Amount Withdrawl\n 3: Balance inquirey\n 4: Exit";
	
		cout<<endl<<endl<<"Please enter your selection: ";
		cin>>selection;
	
		switch(selection){
			case 1:
				cout<<"\t Please enter amount to deposit: ";
				cin>>deposit;
				amount += deposit; // amount = amount + deposit
				break;
			case 2:
				cout<<"\t Please enter amount to withdraw: ";
				cin>>withdraw;
				amount -= withdraw; // amount = amount - deposit
				break;
			case 3:
				cout<<"Your current Balance is: "<<amount<<endl;
				break;
			case 4:
				cout<<"Thank you for using this ATM"<<endl;
				break;
			default:
				cout<<"Please enter a valid selection"<<endl;
		}	
	}
}
