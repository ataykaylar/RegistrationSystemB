#include "SimpleStudent .h"

Student ::Student (const string sFirstName, const string sLastName,
                   const unsigned int sId)
{

    stuId = sId;
    stuFirstName = sFirstName;
    stuLastName = sLastName;
    size = 30;
    courses = new Course[size];
    noOfCourses = 0;

}

string Student::getStudentFirstName() const
{
    return stuFirstName;
}
string Student::getStudentLastName() const
{
    return stuLastName;
}

unsigned int Student::getStudentId() const
{
    return stuId;
}

void Student::addStudentCourse(const int courseId, const string courseName)
{
    for(int i = 0; i < noOfCourses; i++)
    {
        if(courses[i].getCourseName == courseName && courses[i].courseId == courseId)
        {
            cout << "Please enter a non-existing course" << endl;
            return 0;
        }
    }
    Course newStudentCourse(courseName, courseId);
    courses[noOfCourses] = newStudentCourse;
    noOfCourses++;
}

Student ::Student ()
{
}
