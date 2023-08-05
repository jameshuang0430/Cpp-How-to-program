//Instantiating multiple objects of the GradeBook class and using
//the GradeBook constructor to specify the course name
//when each GradeBook object is created.
#include<iostream>
#include<string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // constructor initializes courseName with string supplied as argument 
    GradeBook(string name)
    {
        setCourseName(name); // call set function to initialize courseName 
    } // end GradeBook constructor

    //function to set the course name 
    void setCourseName(string name)
    {
        courseName = name; // sotre the course name in the object 
    } // end function setCourseName

    //function to get the coure name 
    string getCourseName()
    {
        return courseName;
    }

    //display a welcome message to the GradeBook user
    void dispalyMessage()
    {
        // call getCourseName to get the courseName
        cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
    } // end function displayMessage

private:
    string courseName; // course name for this GradeBook

}; // end class GradeBook


int main(void)
{
    // create two GradeBook objects 
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // display inintial valuse of courseName for each GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
}