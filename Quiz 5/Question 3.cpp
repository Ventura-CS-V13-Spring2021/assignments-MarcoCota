#include    <iostream>
using namespace std;
void makebinary(int [], int);
void printbinary(int [], int);
void count0cluster(int [], int);
int main()
{
    const int SIZE = 20;
    int     binary[SIZE];

    srand(time(0));
    makebinary(binary, SIZE);
    printbinary(binary, SIZE);
    count0cluster(binary, SIZE);
}
void makebinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        num[i] = rand() % 2;
}
void printbinary(int num[], int size)
{
    for(int i=0;i<size; i++)
        cout << num[i] << " ";
    cout << endl;
}
void count0cluster(int bin[], int size)
{
    bool check = true; // boolean to check for 1's 
    int cluster = 0;
    for(int i=0; i<size; i++) // takes into account for array named size
    {
        if(bin[i] == 0) // checks if element in array is equal to 0
        {
            if(check)
            {
                cluster++; // adds a cluster if line 32 is true 
            }
            check = false;
        }
        else
        {
            check = true; // to take into consideration for 1's 
        }
    }
    cout << "There are " << cluster << " clusters" << endl;
}