//11 june 2025

// use swtich case to create reandom events
#include <iostream>
#include<ctime> 

int main(){

	srand(time(0));
	int Rand_num = (rand() % 5)+1;// generates random number between 1 to 5

	switch(Rand_num){
	case 1:std::cout<<"You won PS5"<<'\n'; break;
	case 2:std::cout<<"You won dubai trip"<<'\n'; break;
	case 3:std::cout<<"Better luck next time"<<'\n'; break;
	case 4:std::cout<<"KFC discount coupons"<<'\n'; break;
	case 5:std::cout<<"Iphone 16 pro max case"<<'\n'; break;
	}

	return 0;
}