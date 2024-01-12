#ifndef ROSTER_H
#define ROSTER_H

#include "student.h"

class Roster
{
private:
    Student *classRosterArray[5];

public:
    // Constructors and destructor
    Roster();
    ~Roster();

    // Functions
    void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress,
             int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    void remove(std::string studentID);
    void printAll() const;
    void printAverageDaysInCourse(std::string studentID) const;
    void printInvalidEmails() const;
    void printByDegreeProgram(DegreeProgram degreeProgram) const;
};

#endif
