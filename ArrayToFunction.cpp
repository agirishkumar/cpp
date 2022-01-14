#include <iostream>
using namespace std;

void display(int n[3][3]){
    cout<< "Elements of the array are:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<n[i][j]<<endl;
        }
    }
};

int main(){
    int num[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    display(num);
}