// 7 june 2025

#include <iostream>
#include<cmath>

int main(){

	double a ;
	double b ;

	std::cout<< "Enter the first number" << '\n';
	std::cin >> a;

	std::cout<< "Enter the second number"<< '\n'; 
	std::cin >> b;

	//double c = sqrt((a*a)+(b*b)); simpler way
	double c = sqrt(pow(a,2)+pow(b,2));

    std::cout<< "the hypotneuos is "<< c << '\n';
	return 0;}