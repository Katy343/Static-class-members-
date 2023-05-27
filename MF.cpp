//Fig.10.19:Employee.cpp
//Employee class member function definitions
#include<iostream>
#include "Employee.h"
using namespace std;

//define and initialize static data member at global namespace scope
int Employee::count=0;   //cannot include keyword static

//define static member function that returns number
//of Employee objects instantiated (declared static in Employee.h)
int Employee::getCount()
{
    return count;
} //end static function getCount

//constructor initializes non-static data members and
//increment static data member count
Employee::Employee(const string &first, const string &last)
         :firstName(first),lastName(last)
         {
             ++count; //increment static count of employees
             cout<<"Employee constructor for "<<firstName<<" "
             <<lastName<<" called."<<endl;
         } //end Employee constructor

//destructor deallocates (освобождвет) dynamically allocated memory
Employee::~Employee()
{
    cout<<"~Employee destructor for "<<firstName<<" "<<lastName<<" called"<<endl;
    --count; //decrement static count of employees
} //end ~Employee destructor

//return first name of Employee
string Employee::getFirstName()const
{
    return firstName;
} //end function getFirstName

string Employee::getLastName()const
{
    return lastName;
} //end function getLastName

