#ifndef __SIMPLE_STUDENT_H
#define __SIMPLE_STUDENT_H
#include "SimpleCourse.h"
#include <string>
class Student
{
    public:
    Student(const string sFirstName = "", const string sLastName = "",
         const unsigned int sId = 0);
    ~Student();
    string getStudentFirstName() const;
    string getStudentLastName() const;
    unsigned int getStudentId() const;
    void addStudentCourse(const int courseId, const string courseName);
    //friend ostream& operator<<(ostream& out, const Film& f);
private:
    Course *courses;
    unsigned int stuId;
    string stuFirstName;
    string stuLastName;
    unsigned int noOfCourses;
    unsigned int size;
};

#endif
