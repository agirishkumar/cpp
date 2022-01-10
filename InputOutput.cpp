/* Cpp progragram to understand basics of input and output
 iostream contains cin for taking input, cout for displaying output, cerr: Un-buffered standard error stream ,used to output the errors without 
 storing and for storing we use clog
 */

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    string name;
    cout << "Enter Name: " ;
    cin >> name;
    cout << "Hi " << name << "!"<< endl;
    cerr << "An error occurred" << endl;
    clog << "An error occurred";
    return 0;
}