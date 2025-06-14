//10 june 2025

#include <iostream>
#include <iomanip> //sets precision for floating point numbers

void show_balance(double balance);

double deposit();

double withdraw(double balance);


int main(){
	double balance = 0;
	int choice = 0;
do{
	std::cout<<"Enter your choice:\n";
	std::cout<<"1 = Show balance:\n";
	std::cout<<"2 = Deposit money:\n";
	std::cout<<"3 = Withdraw money:\n";
	std::cout<<"4 = Exit:\n";
	std::cin>>choice;

	std::cin.clear();
	fflush(stdin);


	switch(choice)
	{
	case 1:show_balance(balance);		
	case 2:balance += deposit();
	       show_balance(balance);		
	case 3:balance -= withdraw(balance);
	       show_balance(balance);		
	case 4:
		std::cout<<"thanks for visiting"<<'\n'<<'\n'; break;
	default:std::cout<<"Invalid choice"<<'\n';
    }
}while(choice != 4);


	return 0;}

void show_balance(double balance){
	std::cout<<"Your balance is "<<std::setprecision(2)<<std::fixed<<balance<<'\n'<<'\n' ;	}
double deposit(){
	double amount = 0;
	std::cout<<"Enter amount to deposit\n";
	std::cin>>amount;

	if(amount>0){
		return amount;
	}
	else{
		std::cout<<"Not valid\n";
		return 0;
	}}
double withdraw(double balance){
	double amount = 0;
	std::cout<<"Enter amount to withdraw\n";
	std::cin>>amount;
	if(amount> balance){
		std::cout<<"insufficient funds\n";
		return 0;
	}
	else if (amount < 0){
		std::cout<<"thats not a valid amount\n";
		return 0;
	}
	else{
	return amount;		
	}}   