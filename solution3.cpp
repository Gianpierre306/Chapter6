#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double presentValue(double, double, double);

int main()

{   double presentV =0.0;
    double futureV = 0.0;
    double annualInterestRate =0.0;
    double numberYears = 0.0;

    
    cout << "Enter the future value that you want in the account:";
    cin  >> futureV;
    
    cout << "\nEnter the annual interest rate:";
    cin >> annualInterestRate;
    
    cout <<  "\nEnter the number of years that you plan to save:";
    cin >> numberYears;
    
   presentV = presentValue(futureV, annualInterestRate, numberYears);

    cout << fixed << showpoint << setprecision(2);
    cout << "\nThis is the amount you will need to deposit today:"
         << "$"<< presentV;
    
    
    return 0;
}
double presentValue(double futureValue, double annualIntRate, double numberYrs)
{
    double presentValue;
    return  presentValue= futureValue/(pow(1+(annualIntRate/100),numberYrs));

}
