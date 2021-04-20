#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

int main()
{
  ifstream infile;
  infile.open("students.txt"); // allows program to interact with txt file

  //check for error
  if (infile.fail())
  {
    cout << "error opening file" << endl;
    exit(1); // stops programs when 1 error occurs
  }