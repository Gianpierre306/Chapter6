#include <iostream>
#include <iomanip>
using namespace std;


char getOption();
void displayPatientData();
double checkData(double);
int main()
{
   
    
    getOption();
    displayPatientData();
    return 0;
}
char getOption()
{   char letter;
    cout << "Enter the first letter of in-patient or for out-patient.";
    cin >> letter;
    while ( (letter !='I' && letter !='i') && ( letter != 'O' && letter != 'o'))
    {
        cout << "You enter an invalid letter, please enter a valid letter"
             << "(I) for inpatient & (O) for out of patient:";
        
        cin >> letter;
    }
    
    return letter;
}
void displayPatientData()
{
    char letter;
    double days;
    double dailyRate;
    double hospitalMedication;
    double hospitalService;
    double total;
    switch(letter)
    {
    case 'I':
            cout << "Enter the number of days you spent in the hospital: ";
            days = checkData(days);
            cout << "Enter the daily rate cost to stay at the hospital:";
            dailyRate= checkData(dailyRate);
            cout << "Enter the hospital medication charges:";
            hospitalMedication = checkData(hospitalMedication);
            cout << "Enter the hospital services charges (labs, test etc.): ";
            hospitalService = checkData(hospitalService);
            total = days + dailyRate +hospitalMedication + hospitalService;
            cout << "Total bill:" << "$" << total;

            break;
    
    case 'i':
            cout << "Enter the number of days you spent in the hospital: ";
            days = checkData(days);
            cout << "Enter the daily rate cost to stay at the hospital:";
            dailyRate= checkData(dailyRate);
            cout << "Enter the hospital medication charges:";
            hospitalMedication = checkData(hospitalMedication);
            cout << "Enter the hospital services charges (labs, test etc.): ";
            hospitalService = checkData(hospitalService);
            total = days + dailyRate +hospitalMedication + hospitalService;
            cout << "Total bill:" << "$" << total;
    break;
    
    case'O':
            cout << "Enter the hospital services charges(labs, test, etc.):";
            hospitalService = checkData(hospitalService);

            cout << "Enter the hopsital medication charges:";
            hospitalMedication = checkData(hospitalMedication);
            total = hospitalService + hospitalMedication;
            cout << "Total bill" <<"$"<< total;
            break;
    case 'o':
            cout << "Enter the hospital services charges(labs, test, etc.):";
            hospitalService = checkData(hospitalService);

            cout << "Enter the hopsital medication charges:";
            hospitalMedication =checkData(hospitalMedication);
            total = hospitalService + hospitalMedication;
            cout << "Total bill" <<"$"<< total;

            break;
    }
    
}
double checkData(double input)
{
    cin >> input;
    while(input < 0)
    {
        cout << "You've enter a negative number, re-enter a valid number:";
        cin >> input;
    }
    
    return input;
}
