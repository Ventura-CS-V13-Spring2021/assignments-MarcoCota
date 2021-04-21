#include <iostream>
#include <fstream>

using namespace std;

int getRdnum(void);

int main()
{
    int num1, num2, num3; // creates 3 variables to hold an integer
    ofstream outfile;
    outfile.open("question3.txt"); // interacts with numbers text file

    num1 = getRdnum();
    num2 = getRdnum();
    num3 = getRdnum();
}
int getRdnum(void)
{
    int value; 
    value = rand() % 10;  // selects a random number from 0 to 9
    return value;
}