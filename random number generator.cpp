//11 june 2025
#include <iostream>
#include<ctime> //random number generator

int main(){

	srand(time(0));
	int num0 = (rand() % 6)+1;// generates random number between 1 to 6
	int num1 = (rand() % 20)+1;// generates random number between 1 to 20
	int num2 = (rand() % 100)+1;// generates random number between 1 to 100

	std::cout<<num0<<'\n';
	std::cout<<num1<<'\n';
	std::cout<<num2<<'\n';

	return 0;
}
