//include class GradeBook from file GradeBook.h for use in main.
#include<iostream>
#include "GradeBook.h" // include definition of class GradeBook
using std::cout, std::endl;

int main()
{
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    cout << "gradebook1 created for course: " << gradeBook1.getCourseName() << endl;
    cout << "gradebook2 created for course: " << gradeBook2.getCourseName() << endl;

}