#include "student.h"
#include<string>
#include<iostream>

using namespace std;

void student::setName(string first,string last)
{
  fName = first;
  lName = last;
}

string student::fullName()
{
  string temp;
  temp.append(fName);
  temp.append(" ");
  temp.append(lName);
  return temp;
}


