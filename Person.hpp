#pragma once
#include <stdio.h>
#include <string>
using namespace std;

class Person
{  
    string name;
    int ausleihdauer;

public:
    Person(string name, int dauer = 0);
    string getName() const;
    int getAusleihdauer() const;
    void print() const;
};
