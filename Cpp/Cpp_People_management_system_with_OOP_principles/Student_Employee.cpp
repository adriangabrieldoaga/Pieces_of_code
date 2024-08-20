#include <iostream>
#include <string>

#include "Student_Employee.h"

using std::cout;
using std::string;

Student_Employee::Student_Employee()
{
}

Student_Employee::Student_Employee(string first_name_param, string last_name_param, string gender_param, int age_param, int student_ID_param, string university_param,
                                   string school_param, string major_param, int year_param, float GPA_param, float monthly_stipend_param, int employee_ID_param,
                                   string employer_param, string department_param, string job_title_param, float monthly_salary_param)
: Person(first_name_param, last_name_param, gender_param, age_param), Student(first_name_param, last_name_param, gender_param, age_param, student_ID_param,
university_param, school_param, major_param, year_param, GPA_param, monthly_stipend_param), Employee(first_name_param, last_name_param, gender_param, age_param,
employee_ID_param, employer_param, department_param, job_title_param, monthly_salary_param)
{
}

Student_Employee::~Student_Employee()
{
}

ostream& operator<<(std::ostream& out, const Student_Employee& student_employee)
{
    out << "Name: " << student_employee.first_name + " " + student_employee.last_name << "\n" <<
            "Gender: " << student_employee.gender << "\n" <<
            "Age: " << student_employee.age << "\n" <<
            "Occupation: Student, " << student_employee.job_title << "\n" <<
            "Student ID: " << student_employee.student_ID << "\n" <<
            "University: " << student_employee.university << "\n" <<
            "School: " << student_employee.school << "\n" <<
            "Major: " << student_employee.major << "\n" <<
            "Year: " << student_employee.year << "\n" <<
            "GPA: " << student_employee.GPA << "\n" <<
            "Employee ID: " << student_employee.employee_ID << "\n" <<
            "Employer: " << student_employee.employer << "\n" <<
            "Department: " << student_employee.department << "\n" <<
            "Monthly income: " << student_employee.monthly_stipend + student_employee.monthly_salary << "$\n\n";
    return out;
}

void Student_Employee::display_Info() const
{
    cout << *this;
}
