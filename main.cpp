//Fig.10.20:10_20.cpp
//static data member tracking the number of objects of a class
#include<iostream>
#include "Employee.h"
using namespace std;

int main()
{
    //no objects exist; use class name and binary scope resolution operator
    //to access static member function getCount
    cout<<"Number of employees before instantiation of any objects "
    <<Employee::getCount()<<endl; //use class name

    //the following scope creates and destroys
    //Employee objects before main terminates
    {
        Employee e1("Susan","Baker");
        Employee e2("Robert", "Jones");

        //2 objects exist; call static member function getCount
        //again using class name and ::
        cout<<"Number of employees after objects are instantiated "
        <<Employee::getCount()<<endl;
        cout<<"\nEmployee 1: "
        <<e1.getFirstName()<<" "<<e1.getLastName()
        <<"\nEmployee 2: "
        <<e2.getFirstName()<<" "<<e2.getLastName()<<endl;
    } //end nested scope in main

    //no objects exist so call static member function getCount again
    cout<<"\nNumber of employees after objects are deleted: "
    <<Employee::getCount();
}
