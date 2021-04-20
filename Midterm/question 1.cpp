#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

int main()
{
    ifstream infile;
    infile.open("students.txt"); // allows programs to interact with txt file
    
    //check for error
    if (infile.fail())
    {
        cout << "error opening file" << endl;
        exit(1); // stops program when 1 error occurs
    }
    
    string name;
    infile >> name; // takes students name 
    cout <<  "Student name :" << name; // prints out students name 
    
    
    
    int x, y;
    
    infile >> x >> y; // takes in two test values for each student
    
    cout << "num1 :" << x << endl;
    cout << "num2 :" << y << endl;
    
    int result = x + y
    double average = result / 2.0;
    
    if 

    return 0;
}
