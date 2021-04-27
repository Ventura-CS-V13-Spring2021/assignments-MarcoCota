#include    <iostream>
#include    <cstdlib>
#include    <ctime>
using namespace std;
void makearray(int [], int);
void printarray(int [], int);
void findmatchnum(int [], int, int [], int);
int main()
{
    const   int SIZE1 = 10;
    const   int SIZE2 = 5;
    int     num1[SIZE1];
    int     num2[SIZE2];

    srand(time(0));
    makearray(num1, SIZE1);
    printarray(num1, SIZE1);
    makearray(num2, SIZE2);
    printarray(num2, SIZE2);
    findmatchnum(num1,SIZE1, num2, SIZE2);
}
void makearray(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 10;
}
void printarray(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << "\t";
    cout << endl;
}
void findmatchnum(int num1[], int size1, int num2[], int size2)
{
    int match = 0;
    for(int i=0; i<size1; i++) // takes in first array so that it goes through each element
    {   
 int =        for(int j=0; j<size2; j++) // takes in second array so that it goes through each element
        {
            if(num1[i] == num2[j])   // takes in both sets of elements from both arrays to find a match
            {
                match++; // keeps track of how many total matches have been found
            }
        }
    }    
    cout << "The number of matched elements "  << match << endl;
}