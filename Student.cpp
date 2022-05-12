#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::assignDetails(int id, const char name[20])
{
  studentID = id;
  strcpy(studentName , name);
}
void Student::display()
{
  cout<<"Student's ID : "<<studentID<<endl;
  cout<<"Student's Name : "<<studentName<<endl;
}
