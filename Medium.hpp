#pragma once
#include <stdio.h>
#include <string>
#include "Datum.hpp"
#include "Person.hpp"

using namespace std;

/// <summary>
/// Medium .....
/// </summary>
class Medium 
{
protected:
    const string titel;
    const string verlag;
    const int jahr;
    string TypDesMediums;                // Typ des Mediums (z.B. Buch, DVD, ...)
    Person *ausleiher;
    Datum von;
    Datum bis;

public:
    Medium(string t = "", string v = "", int j = 0, string typ = "undef");
    string getTitel() const;
    string getTyp() const;
    Person *getAusleiher();
    void ausleihen(Person & p, Datum von_, Datum bis_);
    virtual void print() const;
};
