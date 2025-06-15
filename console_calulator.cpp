//7 june 2025
// this program can be done by swtich case

#include <iostream>
using std::cout;
using std::cin;

/*

Raw string literal
used for multiline outputs

cout << R"(Hello World!
This is line 2.
This is line 3.
)";

*/

int main(){
    char op;
	double num1;
	double num2;
    
    cout<<" enter num 1\n";
    cin>> num1;

    cout<<" enter num 2\n";
    cin>> num2;

    cout<<R"(select the operation 
    A = Additon
    D = Division
    M = Multiplication
    S = Substraction
    )";

    cout<<"select the operation A D M S\n";
    cin>> op ;

    if (op=='A'){

    	cout<<"Additon of "<< num1 << " and "<< num2<< " is "<< num1+num2 <<'\n';}

    else if(op=='D'){

    	cout<<"Division of "<< num1 << " and "<< num2<< " is "<< num1/num2 <<'\n';}

    else if(op=='M'){

    	cout<<"Multiplication of "<< num1 << " and "<< num2<< " is "<< num1*num2 <<'\n';	}

    else if(op=='S'){

    	cout<<"Substraction of "<< num1 << " and "<< num2<< " is "<< num1-num2 <<'\n';}
    else{

    	cout<<"Enter valid character";}
	return 0;}