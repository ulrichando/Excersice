#include "student.h"
#include <iostream>

// Implement constructors
Student::Student() {}

Student::Student(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress,
                 int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    // Implement constructor
}

// Implement getters
// ...

// Implement setters
// ...

// Implement print function
void Student::print() const
{
    // Print student data
    std::cout << "Student ID: " << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
              << "\tAge: " << age << "\tDays in Course: {" << daysInCourse[0] << ", " << daysInCourse[1]
              << ", " << daysInCourse[2] << "} Degree Program: ";

    switch (degreeProgram)
    {
    case SECURITY:
        std::cout << "Security";
        break;
    case NETWORK:
        std::cout << "Network";
        break;
    case SOFTWARE:
        std::cout << "Software";
        break;
    }

    std::cout << std::endl;
}
