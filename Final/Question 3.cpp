#include <iostream>
#include <string>
#include "Student.h"

Student::Student(string n, int num)
{
    name = n; // allows student information to be entered
    num_classes = num;
    class_list = new string[num];
    for (int i = 0; i < num_classes; i++)
    {
        cout << "Enter the course name : "; // asks user for each of the classes and its name
        cin >> class_list[i]; // inputs information entered
    }
}

Student::Student(Student &rhs)
{
    name = rhs.name;  // copies down information of student selected
    num_classes = rhs.num_classes;
    class_list = new string[num_classes];
    for (int i = 0; i < num_classes; i++) // copies down students class information
    {
        class_list[i] = rhs.class_list[i];
    }
}

Student::~Student()
{
    delete[] class_list; // erases the class list that was input 
}

Student &Student::operator=(Student &rhs)
{
    name = rhs.name; // allows information to be moved from a student to a new variable 
    num_classes = rhs.num_classes;
    class_list = new string[num_classes];
    for (int i = 0; i < num_classes; i++)
    {
        class_list[i] = rhs.class_list[i];
    }
}

void Student::inputClass(string n, int num)
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

void Student::resetClass()
{
    num_classes = 0;
    delete[] class_list;
    class_list = NULL;
}

void Student::printAll() const
{