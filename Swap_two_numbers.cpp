#include <iostream>
using namespace std;
/*📌Example to Understand pass by refernce value

Without & (Pass by Value)
void changeValue(int a){
    a = 100;}

int main(){
    int x = 10;
    changeValue(x);
    cout << x;  // output will be 10}

With & (Pass by Reference)
void changeValue(int &a){
    a = 100;}

int main(){
    int x = 10;
    changeValue(x);
    cout << x;  // output will be 100}
*/
int Swap(int &a , int &b);

int main(){
    int a,b;
    Swap(a,b);

    return 0;
}

int Swap(int &a , int &b){
    cout<<"Enter value of a: \n";
    cin>>a;

    cout<<"Enter value of b: \n";
    cin>>b;

    cout<<"before swap value of a: "<<a<<'\n';
    cout<<"before swap value of b: "<<b<<'\n';

    int temp;
    temp = a ; 
    a = b;
    b = temp; 

    cout<<"after swap value of a: "<<a<<'\n';
    cout<<"after swap value of b: "<<b<<'\n';
    
}
