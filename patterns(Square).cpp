// 12 june 2025 & 13 june 2025
#include<iostream>
using namespace std;

// for better purpose start loop with 0 (int i = 0; i<n;i++)
// for(int i = 1; i<=n;i++){ // inner loop		    
// 		for(int j=1; j<=n;j++){ // outer loop	
// 			cout<<j;
//       }
// 		cout<<'\n';}

// square pattern with numbers 
// 1 2 3 4
// 1 2 3 4 
// 1 2 3 4  
// 1 2 3 4 

int main(){
	cout<<"enter rows\n";
	int rows;
	cin>> rows;

	cout<<"enter columns\n";
	int columns;
	cin>> columns;

	// outer loop
	for(int i = 1; i<=rows;i++){
		    // inner loop
			for (int j=1; j<=columns;j++){				
			cout<<j<<" "; 
			}
		cout<<'\n';
	}
	return 0;
}



// square pattern with  same numbers 
// 1 1 1 1
// 2 2 2 2 
// 3 3 3 3  
// 4 4 4 4 

int main(){
	cout<<"enter rows\n";
	int rows;
	cin>> rows;

	cout<<"enter columns\n";
	int columns;
	cin>> columns;

	// outer loop
	for(int i = 0; i<rows;i++){
		    // inner loop
			for (int j=0; j<columns;j++){				
			cout<<i<<" "; 
			}
		cout<<'\n';
	}
	return 0;
}

// square pattern with characters
// A B C D
// A B C D 
// A B C D  
// A B C D

int main(){

    int n = 4;

	for(int i = 0; i<n;i++){
		char ch = 'A';
			for (int j=0; j<n;j++){				
			cout<<ch<<" "; 
			ch += 1; // A(65) +1 = 66(B)
			}
		cout<<'\n';
	}
	return 0;
}

// square pattern with symbols
// # # # #
// # # # # 
// # # # #  
// # # # #

int main(){
	cout<<"enter rows\n";
	int rows;
	cin>> rows;

	cout<<"enter columns\n";
	int columns;
	cin>> columns;

	cout<<"enter symbols\n";
	char symbols;
	cin>> symbols;


	for(int i = 1; i<=rows;i++){
		 
		for (int j=1; j<=columns;j++){				
			cout<<symbols<<" "; 
			}
		cout<<'\n';
	}
	return 0;
}

// square pattern with continious numbers
// 1 2 3
// 4 5 6
// 7 8 9

int main(){
	cout<<"enter n\n";
	int n;
	int num = 1;
	cin>> n;

	for(int i = 0; i<n;i++){	
		for (int j=0; j<n;j++){		
			cout<<num<<" ";
			num++; 
			}
		cout<<'\n';
	}
	return 0;
}   

// square pattern with continious characters
// A B C
// D E F
// G H I

int main(){
	cout<<"enter n\n";
	int n;
	char ch = 'A';
	cin>> n;

	for(int i = 0; i<n;i++){	
		for (int j=0; j<n;j++){		
			cout<<ch<<" ";
			ch += 1;  // A(65) +1 = 66(B)
			}
		cout<<'\n';
	}
	return 0;
}   