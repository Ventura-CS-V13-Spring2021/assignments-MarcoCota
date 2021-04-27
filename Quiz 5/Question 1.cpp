#include <iostream>
using namespace std;

int main()
{
    const int SIZE=10;
    int     numbers[10] = {5, 10, 75, 80, 25, 55, 95, 70, 60, 15};
    int     diff[10];
    int     sum=0;
   for (int i = 0; i<SIZE; i++)   // takes the elements in the array and adds them together
    {
        cout << numbers[i] << " "; // prints out each element in the array as they're being added
        sum += numbers[i];
    }
    cout << endl;

