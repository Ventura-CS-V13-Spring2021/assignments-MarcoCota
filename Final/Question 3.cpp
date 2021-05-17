#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

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
        class_list[i] = rhs.class_list[i]; // coppies students class list 
    }
}

void Student::inputClass(string n, int num) // allows new values to be added to the student
{
    name = n;
    num_classes = num;
    class_list = new string[num];
    for (int i = 0; i < num_classes; i++) // aska user for their new classes
    {
        cout << "Enter the course name : ";
        cin >> class_list[i];
    }
}

void Student::resetClass() // resets the number of students classes to zero
{
    num_classes = 0;
    delete[] class_list;
    class_list = NULL;
}

void Student::printAll() const // outputs all of the students classes and their name 
{
  cout << "Student Name: " << name << endl;
    for (int i = 0; i < num_classes; i++)
    {
        cout << class_list[i] << endl;
    }
}

string Student::getName() const // allows program to aquire the students name 
{
    return name;
}

int Student::getNumclasses() const // gives number of classes that a student has
{
    return num_classes;
}

int main() // tests classes and functions to work with students information
{
    Student a; 
    a.printAll();
    Student b("Becky", 5);
    b.printAll();
    Student c(b);
    c.printAll();
    c.resetClass();
    cout << c.getNumclasses() << endl;
    c.inputClass("Carl", 3);
    cout << c.getName() << " now has " << c.getNumclasses() << " classes" << endl;
    a = c;
    a.printAll();
    
    return 0;
}