#include <iostream>
using namespace std;


int main(){

    int rows,columns;
    cout<< "Enter number of rows and columns" << endl;
    cin >> rows >> columns;
    int test[rows][columns]; 

    for (int i = 0; i < rows; i++){
        for (int j= 0; j <columns; j++){
            cout<< "Enter the element for "<<i+1<<"row and "<<j+1<<"column :" ;
            cin >> test[i][j];
        }
    }

    cout<< "Elements of the array are:" << endl;
    for (int i= 0; i < rows; ++i){
        for (int j= 0; j < columns; j++){
            cout <<"test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }
}