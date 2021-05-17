#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i; 
    const int N = 20; // sets array to 20 elements max
    int array[20] = {-12, 3, -12, 4, 1, 1, -12, 1, -1, 1, 2, 3, 4, 2, 3, -12, 4, 2, 1, 5};
    sort(array, array + N, greater<int>()); // sorts elements in array from largest to smallest
    
    cout << "N" << "   Count" << endl; // makes it so N is above the elements in the array vertically
    for (int i = 0; i<N; i++) // goes through each element in array
    {
        if (array[i] == array[i-1]) // checks for duplicates with previous integer
        {
            
            cout << array[i] << "  " << endl; // prints out elements from largest to smallest
        
        }
    }

    
}