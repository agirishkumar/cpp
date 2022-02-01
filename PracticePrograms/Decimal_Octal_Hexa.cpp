#include <iostream> // Declarations of cin, cout and
using namespace std; // manipulators oct, hex, ...
int main()
{
int number;
cout << "Please enter an integer: ";
cin >> number;
cout  // for hex-digits
<< " octal \t decimal \t hexadecimal\n "
<< oct << number << " \t "
<< dec << number << " \t "
<< hex << number << endl;
return 0;
}