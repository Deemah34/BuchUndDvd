
#pragma once
#include <stdio.h>
#include "Buch.hpp"
#include "DVD.hpp"
#include "Person.hpp"
#include "Datum.hpp"
#include "Medium.hpp"
#include "Medienbibliothek.hpp"

class Bibliothek 
{
private:
    int anz;
    const int maxAnz;
    Medium ** medien;
    
public:
    Bibliothek(int maxAnz = 1000);
    void mediumBeschaffen(Buch &newBook);
    void mediumBeschaffen(DVD &newDVD);
    void mediumSuchen(string suchwort);
    void mediumAusleihen(int nr, Person & p, Datum d);
    void print() const;
};

