#pragma once
#include "Student.hpp"
#include <string>

using namespace std;

/// <summary>
/// Gibt die Parameter einer Studentenklasse aus
/// </summary>
void Student::print() const
{
    printf("Matrikelnummer: %d \n", this->matNr);
    printf("Name des Studenten: %s \n", this->getName().c_str());
    Person::print();
}

/// <summary>
/// Konstruktor der Klasse Student
/// </summary>
/// <param name="Name">Name des Studenten</param>
/// <param name="Matrikel">Studentennummer</param>
Student::Student(string Name, int Matrikel):
Person(Name, 30)
{
    matNr = Matrikel;
}