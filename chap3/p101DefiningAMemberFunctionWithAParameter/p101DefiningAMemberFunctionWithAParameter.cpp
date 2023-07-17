//Define class GradeBook with a member function that takes a parameter,
//create a GradeBook object and call its displayMessage function.
#include <iostream>
#include <string> 
// program uses C++ standard string class
// i want to store coure name through a string, so i need include <string> 
using namespace std;

//GradeBook class definition 
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage( string courseName )
    {
        cout << "Welcome to the grade book for\n" << courseName << "!" <<endl;
    }// end function displayMessage
}; //end class GradeBook

int main(void)
{
    string nameOfCourse; // string of charactres to store the course name 
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    //prompt for and input course name 
    cout << "Please enter the course name:" << endl;
    getline(cin,nameOfCourse); // read a course name with blanks
    cout << endl; // output a blank line 

    //call myGradeBook's displayMessage function
    //and pass nameOfCourse as an argument
    myGradeBook.displayMessage( nameOfCourse );
}