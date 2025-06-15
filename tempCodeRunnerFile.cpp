#include <iostream>
using namespace std;
 

void factorial(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int fact = 1;
    for(int i = 1;i<=n ; i++){
        fact*= i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<'\n';                
    
}

int main(){
    factorial();
    return 0;
}