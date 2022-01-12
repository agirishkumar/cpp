// Cpp program to display the use of switch cases
#include <iostream>
using namespace std;

string getDayOfWeek(int DayNum) {

    string DayName;

    switch (DayNum)
    {
    case 0: DayName = "Monday";
        break;
    case 1: DayName = "Tuesday";
        break;
    case 2: DayName = "Wednesday";
        break;
    case 3: DayName = "Thursday";
        break;
    case 4: DayName = "Friday";
        break;
    case 5: DayName = "Saturday";
        break;
    case 6: DayName = "Sunday";
        break;
    
    default: DayName = "Invalid Number of the Day";
        
        break;
    }

    return DayName;

}

int main(){
    
    int DayNum;
    string DayName;
    cout << "Enter number of the day in between 0 to 6: ";
    cin >> DayNum;
    DayName = getDayOfWeek(DayNum);
    cout << "Day is: " << DayName << endl;
    
    return 0;
}