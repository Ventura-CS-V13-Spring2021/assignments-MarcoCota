#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{ 
  const int N = 10; // sets the limit to max along with starting the value of max and min to 0
    int numbers[N];
    int nMax = 0;
    int nMin = 0;
    
void makearray(int n[], int N); 
{
  int MAX = 100;
    srand(time(NULL)); // allows code to provide random elements each time
    for (int i = 0; i<N; i++ )
    {
        n[i] = rand() % MAX;
    }
}

void printarray(int n[], int N); 
{