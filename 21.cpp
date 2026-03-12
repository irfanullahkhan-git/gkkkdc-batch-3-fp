#include<iostream>
using namespace std;

int main(){
	startApp:
	cout<<"\n\n";
		
	int shoppingAmt; // total cart amount
	int discountAmt; // calculated 
	int receivedAmt; // amount that received from customer
	int returnAmt; // amount needs to be returned to customer
	
	cout<<"Please Enter Shopping Amount:\t";
	cin>>shoppingAmt;
	// apply discount;
	discountAmt = shoppingAmt * 30 / 100;
	shoppingAmt = shoppingAmt - discountAmt;
	
	
	amountEntry:
		
	cout<<"Please collect "<< shoppingAmt << " Rs from Customer: \t";
	cin>>receivedAmt;
	
	returnAmt = receivedAmt - shoppingAmt;
	if(returnAmt >= 0){
		int hundred = returnAmt / 100;
		returnAmt = returnAmt % 100;
		
		int fifty = returnAmt / 50;
		returnAmt = returnAmt % 50;
		
		int twenty = returnAmt / 20;
		returnAmt = returnAmt % 20;
		
		int ten = returnAmt / 10;
		returnAmt = returnAmt % 10;
		
		if(hundred > 0){
			cout<<"Hundred: "<<hundred<<"\t";
		}
		if(fifty > 0){
			cout<<"Fifty: "<<fifty<<"\t";
		}
		if(twenty > 0){
			cout<<"Twenty: "<<twenty<<"\t";
		}
		if(ten > 0){
			cout<<"Ten: "<<ten<<"\t";
		}
		
		if(returnAmt > 0){
			cout<<"Coins: "<<returnAmt<<"\t";
		}
	}else{
		cout<<"Error: Invalid Amount. Please try again. \n\n";
		goto amountEntry;
	}
		
	goto startApp;
}
