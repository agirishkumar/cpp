#include <iostream>
using namespace std;

class Student {
    public: 
        double marks;

    // Constructor to initialize marks with
    Student(double m){
        marks = m;
    };

};

// fuction that takes object as parameter

void CalculateAverage(Student s1, Student s2)
{
    double average = (s1.marks+s2.marks)/2;
    cout << "Average marks of s1 and s2: "<< average << endl;
}

int main(){
    Student a1(90), a2(95);
    CalculateAverage(a1, a2);
    return 0;
}