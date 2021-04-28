#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rateA = 15.00;
    const double rateB = 12.00;
    const double rateC = 9.00;

//assignment for the seat amounts
    int seatA, seatB, seatC;

// input from user
    cout << "How many tickets for Class A seats were sold?" << endl;
    cin >> seatA;
    cout <<  "How many tickets for Class B seats were sold?" << endl;
    cin >> seatB;
    cout <<  "How many tickets for Class C seats were sold?" << endl;
    cin >> seatC;

//calculations for cash made
    double cashseatA = rateA * seatA;
    double cashseatB = rateB * seatB;
    double cashseatC = rateC * seatC;
    double total = cashseatA + cashseatB + cashseatC;

//display cash amount
    cout << "You made $"<< fixed <<
    showpoint << setprecision(2) << total << " for all the seats. " << endl;
}