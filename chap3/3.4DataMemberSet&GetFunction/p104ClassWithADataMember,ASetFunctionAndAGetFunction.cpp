//Define class GradeBook that contains a courseNmae data member 
//and member functions to set and get its value;
//Create and manipulate a GradeBook object with these functions.
#include <iostream>
#include <string>
using namespace std;

class GradeBook
{
public:
    // function that sets the course name
    void setCourseName( string name )
    {
        courseName = name; // store the course name in the object
    } // end function setCourseName
    
    // function that gets the course name 
    string getCourseName()
    {
        return courseName; // return the object's courseName
    } // end funciton getCourseName

    // function that display a welcome message
    void displayMessage()
    {
        // this statement calls getCourseName to get the 
        // name of the course this GradeBook represents
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" <<endl;
    } // end function displayMessage 
private:
    // course name for this GradeBook 
    //its data member courseName is initialized to the empty string by default.
    string courseName; 
}; // end class GradeBook 

// function main begins program execution
int main(void)
{
    string nameOfCourse; // string of characters to store the course name
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    // display initial value of corseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;

    //prompt for, input and set course name 
    cout << "\nPlease enter the course name:" << endl;
    getline( cin, nameOfCourse ); // read a course name with blanks
    myGradeBook.setCourseName( nameOfCourse ); // set the course name 

    cout << endl;
    myGradeBook.displayMessage(); // display message with new course name 

}