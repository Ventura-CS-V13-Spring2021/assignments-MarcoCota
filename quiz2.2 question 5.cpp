#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num, i;
    int value1, value2;

    cout << "Enter a start and ending range : ";
    cin >> value1 >> value2;

    for(num=value1; num <= value2; num++)
    {
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