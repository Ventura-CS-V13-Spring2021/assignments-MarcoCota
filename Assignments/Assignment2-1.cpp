#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3; 
    //compares user values to find greatest value
    if ( num1 > num2 )
    {
        if ( num1 > num3 )
            cout << "num1 is greatest" << num1 << endl;
        else // num1 =< num3 
            cout << "num3 is greatest" << num3 << endl;
    }
    else
    { 
        if ( num2 > num3 )
            cout << "num2 is greatest" << num2 << endl;
        else // num2 =< num3 
            cout << "num3 is the greatest" << endl;
    }
    return 0;
}