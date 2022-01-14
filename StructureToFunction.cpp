#include <iostream>
using namespace std;

struct Person{
    char name[50];
    int age;
    float salary; 
};

void display(Person p){
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

int main(){
    Person p1;
    cout << "Enter Full Name: ";
    cin.get(p1.name, 50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter Salary: ";
    cin >> p1.salary;

    display(p1);
    

    return 0;
}