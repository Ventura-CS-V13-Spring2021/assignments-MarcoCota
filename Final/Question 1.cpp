#include <iostream>
using namespace std;

int getNumDiv(int i);
    
    int i;
    const int N = 10; // sets array to contain 10 elements
    int array[10] = {1,5,6,10,20,30,40,50,55,60}; // array of 10 elements

int main()
{
    int num, largest_num = 0, result; 
    for (int i = 0; i < N; i++) // goes through each element in array starting from 0
    {
        num = getNumDiv(i); // gives you amount of possible divisible counts for each integer in the array
        if (num > largest_num)
        {
            largest_num = num; 
            result = array[i];
        }
    }
    
    cout << "Largest Divisible Integer: " << result << endl;
    
    return 0;
}


int getNumDiv(int i)
{
    int count = 0;
    for (int j = 0; j<N; j++) // for loop that has code go through each element in array
    {
      if (array [i] % array [j] == 0) // if statement to have i check if it has no remainder from j and if it needs to add 1 to it's count
      {
        count++; // adds 1 to count if prior requirements are filled
      }
    }
    return count;
}
