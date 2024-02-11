#pragma once
#include "Person.hpp"

using namespace std;

/// <summary>
/// Studentenklasse. Erbt von der Personenklasse
/// </summary>
class Student: public Person 
{
    int matNr;
    
public:
    Student(string Name, int Matrikel); 
    void print() const;
};
