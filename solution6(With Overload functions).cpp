#include <iostream>
#include <iomanip>
using namespace std;


char getOption();
double inPatientBill(int, double, double, double);
double outPatientBill(double, double);
double checkData(double);
void setPatientData(int &, double &,double &,double&, char&);

int main()
{
    int days;
    double dailyRate;
    double serviceCharges;
    double medicationCharges;
    double inPatientTotal;
    double outPatientTotal;
    bool showInPatientTotal;
    char letter =  getOption();
    
    if (letter == 'i' || letter == 'I')
    {
        showInPatientTotal = true;
    }
    else
    {
        showInPatientTotal = false;
    }
    
    setPatientData(days,dailyRate,serviceCharges,medicationCharges, letter);
    
    inPatientTotal =inPatientBill(days, dailyRate, serviceCharges, medicationCharges);
    outPatientTotal = outPatientBill(serviceCharges,medicationCharges);
    
    cout << fixed << showpoint << setprecision(2);
    if(showInPatientTotal)
    {
        cout << "The in-patient total bill:" << "$" << inPatientTotal;
    }
    else
    {
        cout << "The out-patient total bill:" << "$" << outPatientTotal;
    }
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
void setPatientData(int &days,double &dailyRate,double &hospitalMedication,double &hospitalService, char &letter)
{
  
    
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

    break;
    
    case'O':
            cout << "Enter the hospital services charges(labs, test, etc.):";
            hospitalService = checkData(hospitalService);

            cout << "Enter the hopsital medication charges:";
            hospitalMedication = checkData(hospitalMedication);

            break;
    case 'o':
            cout << "Enter the hospital services charges(labs, test, etc.):";
            hospitalService = checkData(hospitalService);

            cout << "Enter the hopsital medication charges:";
            hospitalMedication =checkData(hospitalMedication);


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

double inPatientBill(int days, double dailyRate, double hospitalMedication, double hospitalService)
{

    double total;
    
    return total = (days*dailyRate) + hospitalMedication + hospitalService;
}
double outPatientBill(double hospitalMedication, double hospitalService)
{
    double total;
    
    return total = hospitalMedication + hospitalService;
}
