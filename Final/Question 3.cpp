#include <iostream>
#include <string>
#include "LinkedList.h"

Student::Student(string n, int num)
{
    name = n;
    num_classes = num;
    class_list = new string[num];
    for (int i = 0; i < num_classes; i++)
    {
        cout << "Enter the course name : ";
        cin >> class_list[i];
    }
}

