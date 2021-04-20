#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // creates 2 values able to be stored
    int num, i;
    int value1, value2;
    // allows user to input values
    cout << "Enter a start and ending range : ";
    cin >> value1 >> value2;

    for(num=value1; num <= value2; num++)
    {
      // determines when to stop for loop when break is necessary
        for(i=2; i<num; i++)
        {
            if(num % i ==0)
                break;
        }
        if(i == num)
            cout << num << " This is a prime value within your chosen range : ";
        else
            cout << num << " This is not a prime value within chosen range : ";
    }
}