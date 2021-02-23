#include <iostream>
using namespace std;
int main()
{
     char  selection;
     cout << "Enter your choice among A, B, C";
     cin >> selection;
     switch (selection)
     {
        case 'A':
            cout << "Your choice is A";
            break;
        case 'a':
            cout << "Your choice is A";
            break;
        case 'B':
            cout << "Your choice is B";
            break;
        case 'b':
            cout << "Your choice is B";
            break;
        case 'C':
            cout << "Your choice is C";
            break;
        case 'c':
            cout << "Your choice is C";
            break;
     }
     return 0;
}