#include <iostream>
using namespace std;
int main()
{
     int num1, num2, num3;
     cout << "Enter three integer values: ";
     cin >> num1 >> num2 >> num3;
     //  determines if users has one or more values that are the same 
     if ( num1 == num2)
     { 
        if ( num1 == num3 )
            cout << "all numbers are the same" << endl;
         // num1 != num3 
        else
            cout << "num1 and num2 are the same" << endl;
     }
     else
     {
        if ( num2 == num3 )
            cout << "num2 and num3 are the same" << endl;
        // num2 != num3
        else if ( num1 == num3 )
            cout << "num1 and num3 are the same" << endl;
        // num1 != num2 
        else 
            cout << "all numbers are not the same" << endl;
    }
    return 0; 
}