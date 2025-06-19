#include <iostream>
using namespace std;

int Maximum_number(int a, int b, int c);


int main(){
    int a,b,c;

    cout<<"Enter value of a\n";
    cin>>a;

    cout<<"Enter value of b\n";
    cin>>b;

    cout<<"Enter value of c\n";
    cin>>c;

    int max_num = Maximum_number(a,b,c);
    cout<<max_num<<" is Greater\n";

    return 0;
}

int Maximum_number(int a, int b, int c){
    int max_num = a;
    
    if(b>max_num){
        max_num = b;
    }
    if(c>max_num){
        max_num = c;
    }

    return max_num;
}