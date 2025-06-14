//12 june 2025

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	bool isPrime = true;



	for(int i=2; i<=(n-1);i++){
		if(n%i==0){
			isPrime = false ;
			break;
		}
	}
	if(isPrime==true){
		cout<<n<<" is prime number\n" ;
		
	}
	else{
		cout<<n<<" is not a prime number\n" ;
	}

	return 0;
}