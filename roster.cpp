#include "roster.h"
#include <iostream>
#include <sstream>

Roster::Roster()
{
    // Initialize array elements to nullptr
    for (int i = 0; i < 5; ++i)
    {
        classRosterArray[i] = nullptr;
    }
}

Roster::~Roster()
{
    // Release dynamically allocated memory for each student
    for (int i = 0; i < 5; ++i)
    {
        delete classRosterArray[i];
    }
}

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress,
                 int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram)
{
    // Find an empty slot in the array
    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i] == nullptr)
        {
            // Create a new Student object and add it to the array
            classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age,
                                              daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
            return;
        }
    }
}

void Roster::remove(std::string studentID)
{
    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID)
        {
            // Found the student, delete the object and set the array element to nullptr
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
            std::cout << "Student with ID " << studentID << " removed." << std::endl;
            return;
        }
    }

    // Student not found
    std::cout << "Error: Student with ID " << studentID << " not found." << std::endl;
}

void Roster::printAll() const
{
    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i] != nullptr)
        {
            classRosterArray[i]->print();
        }
    }
}

void Roster::printAverageDaysInCourse(std::string studentID) const
{
    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID)
        {
            // Found the student, calculate and print average days in course
            int *days = classRosterArray[i]->getDaysInCourse();
            int average = (days[0] + days[1] + days[2]) / 3;
            std::cout << "Average days in course for student with ID " << studentID << ": " << average << std::endl;
            return;
        }
    }

    // Student not found
    std::cout << "Error: Student with ID " << studentID << " not found." << std::endl;
}

void Roster::printInvalidEmails() const
{
    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i] != nullptr)
        {
            std::string email = classRosterArray[i]->getEmailAddress();

            // Check for valid email format
            if (email.find('@') == std::string::npos || email.find('.') == std::string::npos || email.find(' ') != std::string::npos)
            {
                std::cout << "Invalid email found: " << email << std::endl;
            }
        }
    }
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const
{
    for (int i = 0; i < 5; ++i)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getDegreeProgram() == degreeProgram)
        {
            classRosterArray[i]->print();
        }
    }
}
