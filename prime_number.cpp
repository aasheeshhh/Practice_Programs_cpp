//12 june 2025

#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	bool isPrime = true; // assume given number is prime

// eg n =7 
// 1 (2{start i from 2} 3 4 5 6 (7{n-1})
// 7%2 = 1 false
// 7%3 = 1 false
// 7%4 = 1 false
// 7%5 = 1 false
// 7%6 = 1 false
// no change in isprime = true


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