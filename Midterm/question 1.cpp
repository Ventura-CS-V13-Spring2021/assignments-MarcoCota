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
    
    int above80 = 0; // variable to take averages above 80
    
    string name;
    while (infile >> name) // takes students name
    { 
        
        cout <<  "Student name :" << name; // prints out students name 
    
    
        int x, y;
    
        infile >> x >> y; // takes in two test values for each student
    
        cout << "\tnum1 :" << x;
        cout << "\tnum2 :" << y;
    
        int result = x + y;
        double average = result / 2.0; // divides both scores to get average
        cout << "\tsum :" << result;
    
        if (average >80) // determins if average is above 80
        above80 ++; // if above 80 adds 1 student to the total
        cout << "\tAvg :" << average << endl;
    }
    cout << "Average > 80 :" << above80 << " students" << endl;
    
    return 0;
}
