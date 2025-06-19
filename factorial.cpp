// 15 june 2025
#include <iostream>
using namespace std;
 
void factorial();

int main(){
    factorial();
    return 0;
}


void factorial(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int fact = 1; //initialize factorial = 1

    for(int i = 1;i<=n ; i++){
        fact*= i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact<<'\n';                   
}
// n = 4   fact =1
// i=1   1x1(i) =1
// i=2   1x2(i) =2
// i=3   2x3(i) =6
// i=4   6x4(i) =24
