#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<string>

using namespace std;

class student
{
  private:
    string fName;
    string lName;
    int sNum;


  public:
    void setName(string, string);
    string fullName();


};



#endif
