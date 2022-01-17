#include <iostream>
using namespace std;

int main(){
    int n, reversedNumber = 0, remainder, temp;

    cout << "Enter an integer: ";
    cin >> n;
    temp =n;
    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversedNumber<<endl;

    if (reversedNumber == temp){
        cout << "It is a Palindrome";
    }
    else {
        cout << "It is not a Palindrome";
    }

    return 0;

}
