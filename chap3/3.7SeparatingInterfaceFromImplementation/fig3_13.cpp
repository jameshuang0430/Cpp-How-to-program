// GradeBook class demonstration after separating
// its interface from its implementation. 
#include <iostream>
#include "GradeBook.h"
using std::cout, std::endl;

int main()
{
    GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
    GradeBook gradeBook2( "CS102 Data Structures in C++" );

    // display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() 
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        <<endl;
}