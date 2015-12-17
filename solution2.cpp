#include <iostream>
#include <iomanip>
using namespace std;

double getSales(double);
void findHighest(double, double, double, double);

int main()
{
    double northEast =0.0;
    double northWest =0.0;
    double southEast =0.0;
    double southWest =0.0;
    
    cout << "Enter the sales for figures for the Northeast division:";
    
    northEast = getSales(northEast);
   
    cout << "Enter the sales for figures for the Northwest division:";

    northWest = getSales(northWest);
    
    cout << "Enter the sales for figures for the Southeast division:";

    southEast = getSales(southEast);
    
    cout << "Enter the sales for figures for the Southwest division:";

    southWest = getSales(southWest);
    
    cout <<fixed<<showpoint << setprecision(2);
    cout << "The highest division is ";
    
    findHighest(northEast, northWest, southEast, southWest);
    
    return 0;
}

double getSales(double input)
{
    cin >> input;
   
    
    while(input <0)
    {
        cout << "We do not accept dolar amounts less than $0.00."
             << "\nPlease enter the sales figure again.";
        cin  >> input;
    }
    
    
    
    return input;
}
void findHighest(double norEastSales, double norWestSales,double souEastSales, double souWestSales)
{
    double highest =0.0;
    
    if(norEastSales > norWestSales && norEastSales > souEastSales && norEastSales > souWestSales)
    {  
            cout << "Northeast"<<"$";
            highest = norEastSales;
            cout << highest;
    }
    
    if(norWestSales > norEastSales && norWestSales > souEastSales && norWestSales > souWestSales)
    {    
            cout << "Northwest"<<"$";
            highest = norWestSales;
            cout << highest;
    }
    
    if(souEastSales > norEastSales && souEastSales > norWestSales && souEastSales > souWestSales)
    {   
            cout << "Southeast"<<"$";
            highest = souEastSales;
            cout << highest;
    }
    
    if(souWestSales > norEastSales && souWestSales > norWestSales && souWestSales > souEastSales)
    {  
            cout << "Southwest:"<<" " << "$";
            highest = souWestSales;
            cout << highest;
    }
}
