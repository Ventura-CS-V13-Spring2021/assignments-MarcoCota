#include <iostream>
#include <fstream>

using namespace std;

int getRdnum(void);
int isGreater(int n);

int main()
{
    int value = 0; // starts value at 0
    ofstream outfile;
    outfile.open("numbers.txt"); // interacts with numbers text file

    for (int i = 0; i < 10; i++) // prints 10 numbers at random 
    {
        value = getRdnum();
        if (isGreater(value))
        outfile << value << " ";
    }

    outfile.close();
    
    return 0;
}

int getRdnum(void)
{
    int value; 
    value = rand() % 50 + 1;  // selects a random number from 1 to 50
    return value;
}

int isGreater(int n)
{
    static int previous = 0; // checks if current value is > previous
    int result;
    if (n > previous && previous != 0) 
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    
    previous = n;
    return result;
}