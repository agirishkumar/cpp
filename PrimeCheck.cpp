#include <iostream>
#include <cmath>
using namespace std;

string isPrime(int n) {
        if(n==1){
       return "No";
   }
   for (int i = 2; i <= sqrt(n); i++) {
       if(n%i==0){
           return "No";
       }   
   }

   return "Yes";
}

int main(){
    int t;
    cout <<"Number of inputs: "<<endl;
    cin >> t;
    while(t--){
        int n;
        cout <<"Enter number: "<<endl;
        cin >> n;
        cout << isPrime(n)<<endl;
    }
    return 0;
}