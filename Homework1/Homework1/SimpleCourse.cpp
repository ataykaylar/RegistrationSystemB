#include "SimpleCourse.h"

Course::Course(const string courseName,
                const unsigned int courseId)
{
    cName = courseName;
    cId = courseId;

}

string Course::getCourseName() const{
    return cName;
}

int Course::getCourseId() const{
    return cId;
}



