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

// C = ((T-32)*5/9) temperature is in F
// F = (T*(9/5)+32) temperature is in C

    if(unit=='c'){
	cout<<((temp-32)*5/9)<<"C\n";
    }
	else{
	cout<<(temp*(9/5)+32)<<"F\n";
    }
	return 0;
}
