#include<iostream>
#include<string>
//code from coder of mict-edu ii seek for me with any programming issue @ticha moxely
using namespace std;
//class definition
class BankAccount
{
	public:
		//data members/instance variables declaration
		string account_no,name_of_depositor,account_type;
		int balance_amount,withdraw_amount,balance;
		//members functions definitions
		void initializeMembers()
		{
		
		}
		void depositAmount()
		{
		
		}
		void withdrawAmount()
		{
		
		}
		void displayBalance()
		{
		
		}
};
int main()
{
	//looping for 10 customers of bank will register tenth times 
	for(int i=0;i<10;i++){
	BankAccount object;
	object.initializeMembers();
	object.depositAmount();
	object.withdrawAmount();
	object.displayBalance();
    }
}
