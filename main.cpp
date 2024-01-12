#include "roster.h"
#include <iostream>

int main()
{
    // Print course title, programming language, student ID, and name
    std::cout << "Course Title: C++ Project\nProgramming Language: C++\nWGU Student ID: YourID\nYour Name: Your Name\n\n";

    // Create an instance of the Roster class
    Roster classRoster;

    // Add each student to classRoster
    classRoster.add("A1", "John", "Smith", "John1989@gmail.com", 20, 30, 35, 40, SECURITY);
    classRoster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmail.com", 19, 50, 30, 40, NETWORK);
    classRoster.add("A3", "Jack", "Napoli", "The_lawyer99@yahoo.com", 19, 20, 40, 33, SOFTWARE);
    classRoster.add("A4", "Erin", "Black", "Erin.black@comcast.net", 22, 50, 58, 40, SECURITY);
    classRoster.add("A5", "Your", "FirstName", "YourEmail@domain.com", YourAge, NumberOfDaysToComplete3Courses, SOFTWARE);

    // Demonstrate required functionality
    classRoster.printAll();
    classRoster.printInvalidEmails();
    classRoster.printAverageDaysInCourse("A1"); // Use an actual student ID
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printAll();
    classRoster.remove("A3");

    return 0;
}

/*
Book* parse(string data){
size_t rhs = data.find(",", lhs);
string title = data.substr(0, rhs);

size_t lhs = rhs + 1;
rhs = data.find(",", lhs);
string author = data.substr(lhs, rhs-lhs);

lhs = rhs+1;
rhs = data.find(",", lhs);
int number = stoi(data.substr(lhs, rhs-lhs));

lhs = rhs+1;
rhs = data.find(",", lhs);
string strGenre = data.substr(lhs, rhs-lhs);

Genre genre = Genre::MYSTERY;
if (strGenre == "Science Fiction"){
genre = Genre::SCIFI;
}
else if (strGenre == "Western"){
genre = Genre::WESTERN;
}
else if (strGenre == "Fantasy"){
genre = Genre::FANTASY;
}
return new Book(title, author, number, genre);
*/