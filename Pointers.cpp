/* 
    pointers are used to store addresses not values in
    poniters can be declared either as :
    int* var 
       or
    int *var --- preferred
    &var is an address
    pointVar = &var;
    *pointVar is the value stored in &var
*/
#include <iostream>
using namespace std;

int main(){

    int* pointVar;
    int var = 5;
    pointVar = &var;
    cout <<"pointvar: "<< pointVar <<endl;
    cout << "*pointVar: "<<*pointVar <<endl;
    cout << "&pointVar: "<<&pointVar <<endl;
    cout << "Var: "<< var <<endl;
    cout << "&Var: "<< &var <<endl;

    *pointVar = 1;
    cout << "Value of var now: "<< var << endl;


    return 0;
}