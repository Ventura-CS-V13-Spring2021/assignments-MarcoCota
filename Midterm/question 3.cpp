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
int findMin(int num1, int num2, int num3) // determines which num is the min value
{

  int min = 10; // forces code to not go any higher than 9

  if (num1 < min)
    min=num1;
  if (num2 < min)
    min=num2;
  if(num3 < min)
    min=num3;

  return min;
}

int findMax(int num1, int num2, int num3) // determines which num is the max value
{

  int max = -1; // forces code to not go any lower than 0

  if (num1 > max)
    max=num1;
  if (num2 > max)
    max=num2;
  if(num3 > max)
    max=num3;

  return max;
}