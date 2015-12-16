#include <iostream>
#include <iomanip>
using namespace std;

double calculateRetail(double, double);

int main()
{
    double itemPrice = 0.0;
    double markUpPercentage = 0.0;
    double total = 0.0;
    
    do {
        cout << "Enter the item whole sale price:";
        cin >> itemPrice;
        cout << "Enter the mark up percentage of the item:";
        cin >> markUpPercentage;
    
      while(itemPrice <=0)
      {
        cout << " You enter a negative value."
             << " We do not accept any negative value."
             << " \nPlease re-enter a postive value for item:"
             << "$";
        cin >> itemPrice;
      }
            while(markUpPercentage <=0)
            {
                
            cout << "\nPlease re-enter a postive value for the markup percentage:";
            cin >> markUpPercentage;
                
            }
        
        total = calculateRetail(itemPrice, markUpPercentage);
   
        cout << fixed << showpoint << setprecision(2);
        cout << "The new retail price of the item with the markup percentage is: "
             << "$" << total;
        
    } while( itemPrice <=0 || markUpPercentage <=0);
    
    
    return 0;
}

double calculateRetail(double price, double percentage)
{   double total = price*(percentage/100);
    double newPrice = price+total;
    
    return newPrice;
}
