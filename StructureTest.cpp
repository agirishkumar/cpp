#include <iostream>
using namespace std;

struct Person{
//    string name;
    char name[50];
    int age;
    float salary;
};

int main(){

    Person p1;
    cout << "Enter Full Name: ";
    cin.get(p1.name, 50);
 //   cin >> p1.name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter Salary: ";
    cin >> p1.salary;


    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;


}