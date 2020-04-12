#ifndef __SIMPLE_COURSE_H
#define __SIMPLE_COURSE_H
#include <string>
using namespace std;
#include <iostream>


class Course
{
public:
    Course(const string courseName = "", const unsigned int courseId = 0);
    string getCourseName() const;
    int getCourseId() const;
private:
    int cId;
    string cName;
};

#endif // SIMPLECOURSE_H
