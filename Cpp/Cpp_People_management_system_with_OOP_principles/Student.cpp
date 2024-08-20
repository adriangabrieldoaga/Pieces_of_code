#include <iostream>
#include <string>

#include "Student.h"

using std::cout;
using std::string;

Student::Student()
{
}

Student::Student(string first_name_param, string last_name_param, string gender_param, int age_param, int student_ID_param, string university_param, string school_param,
                 string major_param, int year_param, float GPA_param, float monthly_stipend_param)
: Person(first_name_param, last_name_param, gender_param, age_param), student_ID(student_ID_param), university(university_param), school(school_param),
major(major_param), year(year_param), GPA(GPA_param), monthly_stipend(monthly_stipend_param)
{
}

Student::~Student()
{
}

ostream& operator<<(std::ostream& out, const Student& student)
{
    out << "Name: " << student.first_name + " " + student.last_name << "\n" <<
            "Gender: " << student.gender << "\n" <<
            "Age: " << student.age << "\n" <<
            "Occupation: Student\n" <<
            "Student ID: " << student.student_ID << "\n" <<
            "University: " << student.university << "\n" <<
            "School: " << student.school << "\n" <<
            "Major: " << student.major << "\n" <<
            "Year: " << student.year << "\n" <<
            "GPA: " << student.GPA << "\n" <<
            "Monthly stipend: " << student.monthly_stipend << "$\n\n";
    return out;
}

void Student::display_Info() const
{
    cout << *this;
}
