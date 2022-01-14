#include <iostream>
using namespace std;

int main() {
    
    // initialize an array without specifying size
    int t;
    double sum = 0;
    double count = 0;
    double average;

    cout << "Enter number of elements in array" << endl;
    cin >> t;
    double numbers[t];
    cout << "Enter the elements: "<< endl;
    for (int i = 0; i < t; i++){
        cin >> numbers[i];
    }

    

    cout << "The numbers are: ";

    //  print array elements
    // use of range-based for loop
    for (const double &n : numbers) {
        cout << n << "  ";

        //  calculate the sum
        sum += n;

        // count the no. of array elements
        ++count;
    }

    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / count;
    cout << "Their Average = " << average << endl;
    cout << "Number of Elements = " << count << endl;
    return 0;
}