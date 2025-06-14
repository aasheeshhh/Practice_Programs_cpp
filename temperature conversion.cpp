//8 june 2025
#include<iostream>
using std::cout;
using std::cin;


int main(){
	double temp;
	char unit;


	cout<<"Enter temperature:";
	cin>> temp;

	cout<<R"(convert in:
	c = celsius
	f = fahrenheit
	)";
	cin>>unit;


	if(unit=='c'){
		cout<<((temp-32)*5/9)<<'\n';}
	else{
		cout<<(temp*(9/5)+32)<<'\n';}
	return 0;
}