#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void makearray(int n[], int N); // forgot to add the prototypes before main 
void printarray(int n[], int N); 
void findminmax(int n[], int N); 

int main()
{ 
    const int N = 10; // sets the limit to max along with starting the value of max and min to 0
    int numbers[N];
    makearray(numbers,N);
    printarray(numbers,N);
    findminmax(numbers,N);
    
    return 0;
} 
    
void makearray(int n[], int N) 
{
    int MAX = 100;
    srand(time(NULL)); // allows code to provide random elements each time
    for (int i = 0; i<N; i++ )
    {
        n[i] = rand() % MAX;
    }
}

void printarray(int n[], int N) 
{
    cout << "List of elements: ";
    for (int i = 0; i<N; i++ )// makes it so the array gives 10 elements in the array then prints each one out
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

void findminmax(int n[], int N) 
{
    int nMax = 0; // starts nMax at 0
    int nMin = 99; // starts nMax at 99
    for (int i = 0; i<N; i++ ) // goes through each element of the array
    {
        if (n[i]>nMax) // checks if current elemenet becomes new nMax
        {
            nMax = n[i];
        }
        if (n[i]<nMin) // checks if current element becomes new nMin
        {
            nMin = n[i];
        }
    }
    
    cout << "This is the Max element: " << nMax << endl; // prints out the max element after going throught the array
    cout << "This is the Min element: " << nMin << endl; // prints out the min element after going throught the array
}