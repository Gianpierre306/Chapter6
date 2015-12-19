#include <iostream>
#include <iomanip>
using namespace std;
int numberOfEmployees();
int employeesDaysMissed(int);
double getAverage(int, int);
int main()
{
    
    int employees;
    int totalDays;
    double average;
    
    employees = numberOfEmployees();
    totalDays = employeesDaysMissed(employees);
    average = getAverage(employees, totalDays);
    
    cout << "The average number of days employees missed" << average;
    
    
    
    return 0;
}
int numberOfEmployees()
{
    int input;
    
    cout << "Enter the number of employees in the company:";
    cin >> input;
    while(input < 1)
    {
        cout << "You enter a number less than 1, please enter a valid number:";
        cin >> input;
    }
    
    return input;
}
int employeesDaysMissed(int input)
{
    int empMissedDays = 0;
    int total = 0;
    for(int count =0; count < input; count++)
    {
        cout << " Enter the number of days each employee missed during the past year:";
        cin >> empMissedDays;
        
        while(empMissedDays < 0)
        {
            cout << "You enter a negative number, please enter a valid number:";
            cin >> empMissedDays;
        }
            total +=empMissedDays;
    }
   
    return total;
}
double getAverage(int input, int totalEmpMissedDays)
{
    return  static_cast<double>(input)/totalEmpMissedDays;
}
