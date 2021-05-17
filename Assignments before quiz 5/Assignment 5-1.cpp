#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int N = 10, MAX = 99;
    int numbers[N];
    int nSum = 0;
    float avg = 0;

    srand(time(NULL)); // This sets up the random "seed" so that the generates 10 new elements depending on the moment code is ran.
    cout << "Elements in array: ";   // This allows the Filling array to use random functions
    for (int i = 0; i<N; i++ )
    {
        numbers[i] = rand() % MAX;
        cout << numbers[i] << " ";
         nSum += numbers[i]; // Break down is this == nSum = nSum + numbers[i] along with also summing up elements within array 
    }
    
    cout << endl << "Sum of all the elements: " << nSum << endl;
  
    avg = nSum / float(N); //this gets the average of the elements within array and the float doesn't make N a float perm just temp
    cout << "The average of the elements: " << avg << endl;
    return 0;
}