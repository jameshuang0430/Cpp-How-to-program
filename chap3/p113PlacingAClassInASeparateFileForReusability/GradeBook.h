//GradeBook.h
//GradeBook class definition in a separate file from main.
#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

class GradeBook
{
    public:
        //constructor initializes courseName with string supplied as argument
        GradeBook(string name)
        {
            setCourseName(name);
        }
        
        // function to set the course name 
        void setCourseName(string name)
        {
            courseName = name;
        }

        // function to get the course name 
        string getCourseName()
        {
            return courseName;
        }

        // display a welcome message to teh GradeBook user 
        void displayMessage()
        {
            // call getCourseName to get the courseName
            cout << "Welcome to the grade book for\n" << getCourseName()
            << "!" << endl;
        }
    private:
        string courseName;
};