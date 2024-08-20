#include <iostream>
#include <string>

#include "Employee.h"

using std::cout;
using std::string;

Employee::Employee()
{
}

Employee::Employee(string first_name_param, string last_name_param, string gender_param, int age_param, int employee_ID_param, string employer_param, string department_param,
                   string job_title_param, float monthly_salary_param)
: Person(first_name_param, last_name_param, gender_param, age_param), employee_ID(employee_ID_param), employer(employer_param), department(department_param),
job_title(job_title_param), monthly_salary(monthly_salary_param)
{
}

Employee::~Employee()
{
}

ostream& operator<<(std::ostream& out, const Employee& employee)
{
    out << "Name: " << employee.first_name + " " + employee.last_name << "\n" <<
            "Gender: " << employee.gender << "\n" <<
            "Age: " << employee.age << "\n" <<
            "Occupation: " << employee.job_title << "\n" <<
            "Employee ID: " << employee.employee_ID << "\n" <<
            "Employer: " << employee.employer << "\n" <<
            "Department: " << employee.department << "\n" <<
            "Monthly salary: " << employee.monthly_salary << "$\n\n";
    return out;
}

void Employee::display_Info() const
{
    cout << *this;
}
