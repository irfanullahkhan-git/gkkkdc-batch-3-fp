#include<iostream>
using namespace std;

int main(){
	int dueAmount, recAmount, change;
	cout<<"Enter Due Amount: \t";
	cin>>dueAmount;
	
	cout<<"Enter Received Amount: \t";
	cin>>recAmount;
	
	change = recAmount - dueAmount;
	
	if(change >= 0){
		// valid case
		// 100, 50, 20, 10
		int hundred = change / 100;
		change = change % 100;
		
		int fifty = change / 50;
		change = change % 50;
		
		int twenty = change / 20;
		change = change % 20;
		
		int ten = change / 10;
		change = change % 10;
		
		if(hundred > 0){
			cout<<"Hundred: "<<hundred<<endl;
		}
		
		if(fifty > 0){
			cout<<"Fifty: "<<fifty<<endl;
		}
		if(twenty > 0){
			cout<<"Twenty: "<<twenty<<endl;
		}
		if(ten > 0){
			cout<<"Ten: "<<ten<<endl;	
		}
		if(change > 0){
			cout<<"1 x Coins: "<<change<<endl;	
		}
	}else{
		// invalid case
		cout<<"The Received amount is less than Due Amount.";
	}
}
