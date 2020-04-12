#ifndef __REGISTRATION_SYSTEM_H
#define __REGISTRATION_SYSTEM_H
#include "SimpleStudent.h"
#include <string>

using namespace std;

class RegistrationSystem
{
public:
    RegistrationSystem();
    ~RegistrationSystem();
    void addStudent( const int studentId, const string firstName, const string lastName );
    void deleteStudent( const int studentId );
    void addCourse( const int studentId, const int courseId, const string courseName );
    void withdrawCourse( const int studentId, const int courseId );
    void cancelCourse( const int courseId );
    void showStudent( const int studentId );
    void showCourse( const int courseId);
    void showAllStudents();
    void sortStudentsArray();

private:
    Student *students;
    unsigned int noOfStudents;

};


#endif

