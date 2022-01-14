#include <iostream>
using namespace std;



int main(){

    cout << "Enter number of elements in Array: ";
    int a;
    cin >> a;
    int arrayName[a];
    cout << "Enter the Numbers: ";
    for (int i = 0; i < a; ++i) {
        cin >> arrayName[i];
    }

    cout << "The numbers are: ";

    //  print array elements
    for (int n = 0; n < a; ++n) {
        cout << arrayName[n] << "  ";
    }

    return 0;
    
}