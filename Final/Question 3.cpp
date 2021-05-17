#include <iostream>
#include <string>
#include "Student.h"

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

Student::Student(Student &rhs)
{
    name = rhs.name;
    num_classes = rhs.num_classes;
    class_list = new string[num_classes];
    for (int i = 0; i < num_classes; i++)
    {
        class_list[i] = rhs.class_list[i];
    }
}
Student::~Student()
{
    delete[] class_list;
}