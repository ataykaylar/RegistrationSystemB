#include "SimpleStudent.h"

Student ::Student (const string sFirstName, const string sLastName,
                   const unsigned int sId)
{
    stuId = sId;
    stuFirstName = sFirstName;
    stuLastName = sLastName;
    noOfCourses = 0;
    courses = new Course[noOfCourses];

}

string Student::getStudentFirstName() const
{
    return stuFirstName;
}
string Student::getStudentLastName() const
{
    return stuLastName;
}

int Student::getStudentId() const
{
    return stuId;
}

void Student::addStudentCourse(const int studentId, const int courseId, const string courseName)
{
    for(unsigned int i = 0; i < noOfCourses; i++)
    {
        if(courses[i].getCourseName() == courseName && courses[i].getCourseId() == courseId)
        {
            cout << "Student " << studentId << " is already enrolled in course " << courseId << endl;
            return;
        }
    }
    Course course(courseName, courseId);
    if(noOfCourses == 0)
    {
        noOfCourses++;
        delete [] courses;
        courses = NULL;
        courses = new Course[noOfCourses];
        courses[noOfCourses - 1] = course;
        cout << "Course "<< courseId<< " has been added to student " << studentId << endl;
    }
    else
    {
        noOfCourses++;
        Course *tempCourses = new Course[noOfCourses];

        for(unsigned int i = 0; i < noOfCourses - 1 ; i++)
        {
            tempCourses[i] = courses[i];
        }
        delete[] courses;
        courses = NULL;

        courses = new Course[noOfCourses];

        for(unsigned int j = 0; j < noOfCourses; j++)
        {
            courses[j] = tempCourses[j];
        }

        courses[noOfCourses - 1] = course;
        cout << "Course "<< courseId<< " has been added to student " << studentId << endl;

        delete [] tempCourses;
        tempCourses = NULL;
    }
}

void Student::withdrawStudentCourse(const int studentId, const int courseId)
{
    if(noOfCourses>= 1)
    {
        for(unsigned int i = 0; i < noOfCourses; i++)
        {
            if(courses[i].getCourseId() == courseId)
            {
                for(unsigned int k = i; k < noOfCourses - 1; k++)
                {
                    courses[k] = courses[k + 1];
                }
                noOfCourses--;
                cout <<"Student " << studentId << " has been withdrawn from course " << courseId <<endl;
                return;
            }
        }
        cout << "Student " <<studentId<< " is not enrolled in course " << courseId<< endl;
    }

}

bool Student::deleteCourse(const int courseId)
{
    for(unsigned int i = 0; i < noOfCourses; i++)
    {
        if(courses[i].getCourseId() == courseId)
        {
            for(unsigned int k = i; k < noOfCourses - 1; k++)
            {
                courses[k] = courses[k + 1];
            }
            noOfCourses--;
            return true;
        }
    }
    return false;
}


void Student::printCourses()
{
    if(noOfCourses > 0){
    cout<< "\t\t" <<"Course id " << "\t"<<"Course name "<< endl;
    for(unsigned int i = 0;  i < noOfCourses; i++)
    {
        cout << "\t\t" <<courses[i].getCourseId() << "\t" << courses[i].getCourseName() <<endl;
    }
    }
}
void Student::printStudentCourses()
{
    if(noOfCourses > 0){
            cout<< "\t\t" <<"Course id " << "\t"<<"Course name "<< endl;
    for(unsigned int i = 0;  i < noOfCourses; i++)
    {
        cout <<"\t\t"<<courses[i].getCourseId() << "\t" << courses[i].getCourseName() <<endl;
    }
    }
}

bool Student::printStudent(const int courseId)
{

    for(unsigned int i = 0; i < noOfCourses; i++)
    {

        if(courses[i].getCourseId() == courseId)
        {
            return true;
        }

    }
    return false;
}


Student::~Student ()
{

}
