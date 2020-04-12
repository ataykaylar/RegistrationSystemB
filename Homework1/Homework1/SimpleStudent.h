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
    int getStudentId() const;
    void addStudentCourse(const int studentId, const int courseId, const string courseName);
    void withdrawStudentCourse(const int studentId, const int courseId);
    bool deleteCourse(const int courseId);
    void printCourses();
    void printStudentCourses();
    bool printStudent(const int courseId);

private:
    Course *courses;
    int stuId;
    string stuFirstName;
    string stuLastName;
    unsigned int noOfCourses;

};

#endif
