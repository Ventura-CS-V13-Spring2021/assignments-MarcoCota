#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int value = 0; // starts value at 0
    ofstream outfile;
    outfile.open("numbers.txt"); // interacts with numbers text file

    for (int i = 0; i < 10; i++) // prints 10 numbers at random 
    {
        value = getRdnum();
        outfile << i << " " << value << endl;
    }