#include <iostream>
using namespace std;

int main()
{
   //creats the input range of 0-99
    int int1, int2, int3;
    cout << "Input three integers in the range of 0-99" << endl;
    cin >> int1 >> int2 >> int3;

    if (int1 == int2)
    {
        if (int1 == int3)
            cout << "There are duplicate numbers" << endl;
          // int1 is not equal to int3
        else
            cout << "int1 and in2 are duplicates" << endl;
    }
    else 
    { 
        if (int2 == int3)
            cout << "int2 and int3 are the same" << endl;
          // int1 is not equal to int3
        else if (int1 == int3)
            cout << "int1 and int3 are the same" << endl;
          // num1 is not equal to int2
        else
            cout <<"There are no duplicates integers" << endl;            
    }
    return 0;
}