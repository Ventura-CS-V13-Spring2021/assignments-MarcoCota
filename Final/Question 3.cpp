#include <iostream>
#include <string>
#include "LinkedList.h"

Student::Student(string n, int num)
{
    name = n;
    num_classes = num;
    class_list = new string[num];
