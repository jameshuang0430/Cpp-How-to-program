// Define class BradeBook with a member function displayMessage,
//create a GradeBook object, and call its displayMessage function.
#include <iostream> 
using namespace std;

//GradeBook class definition
class GradeBook
{
public:
    //function that displays a welcome message to the GradeBook user
    void displayMessage() // this is member function
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // end function displayMessage 
}; // end class GradeBook
// REMEMBER! THE CLASS DEFINITION TERMINATES WITH A SEMICOLON

// function main begins program execution
int main()
{
    GradeBook myGradeBook; // create a GradeBoook object named myGradeBook 
    myGradeBook.displayMessage(); // call object's displayMessage function 
} // end main