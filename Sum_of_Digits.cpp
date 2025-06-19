#include <iostream>
using namespace std;

int sum_of_Digits(int n);

int main() {
    int n;
    cout << "Enter the number\n";
    cin >> n;
    int result = sum_of_Digits(n);
    cout << "Sum of digits of " << n << " is " << result << '\n';
    return 0;
}

int sum_of_Digits(int n) {
    int last_digit;
    int sum = 0;

    while (n > 0) {
        last_digit = n % 10;   // extracts last digit
        sum += last_digit;     // adds it to sum
        n = n / 10;            // removes last digit
    }


    return sum;
}

