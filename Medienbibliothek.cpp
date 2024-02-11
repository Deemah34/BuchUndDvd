#include "Medienbibliothek.hpp"
#include <clocale>
#include "Medienbibliothek.hpp"
#include "Buch.hpp"
#include "DVD.hpp"
#include "Student.hpp"
#include "Dozent.hpp"
#include "Datum.hpp"
#include <string>
#include <iostream>

/// <summary>
/// KOnstruktor
/// </summary>
/// <param name="maxAnz_">Maximale Anzahl an Elementen</param>
Bibliothek::Bibliothek(int maxAnz_): 
    maxAnz(maxAnz_)
{
    medien = new Medium *[maxAnz_];
    anz = 0;
}

/// <summary>
/// Neues Buch wird an eine freie Klasse in dem Medien*[] gespeicher. 
/// </summary>
/// <param name="newBOOK">Neues, bereits erzeugtes Buch.</param>
void Bibliothek::mediumBeschaffen(Buch &newBOOK)
{
    if(anz < maxAnz)
    {
    Buch *temp = new Buch(newBOOK);
    this->medien[anz] = temp;
    this->anz++;
    }
    else cout << "Speicher voll" << endl;
}

/// <summary>
/// Neue DVD wird an eine freie Klasse in dem Medien*[] gespeicher. 
/// </summary>
/// <param name="newDVD">Neue, bereits erzeugt DVD</param>
void Bibliothek::mediumBeschaffen(DVD &newDVD)
{
      if(anz < maxAnz)
      {
       DVD *temp = new DVD(newDVD); 
        this->medien[anz] = temp;
        this->anz++;
      }
      else 
      cout << "Speicher voll" << endl;
}

/// <summary>
/// Ein medium wird in dem Medien[] gesucht. Falls vorhanden, 
/// wird es in der Konsole ausgegeben
/// </summary>
/// <param name="suchwort">Wort das im Titel gesucht wird.</param>
void Bibliothek::mediumSuchen(string suchwort)
{
    for(int i= 0; i < anz; i++)
    {
        string zumSuchen= medien[i]->getTitel();
        size_t found = zumSuchen.find(suchwort);
        
        if ( found != string::npos)
            medien[i]->print();
    }
}

/// <summary>
/// Medium wird in den Medien ausgeliehen
/// </summary>
/// <param name="nr">Arrayplatz</param>
/// <param name="p">Person als Klasse</param>
/// <param name="d">Datum als Datumsklasse</param>
void Bibliothek::mediumAusleihen(int nr, Person &p, Datum d)
{
    medien[nr]->ausleihen(p, d, d +(p.getAusleihdauer()));
}

/// <summary>
/// Bibliotek wird mit allen Medien in der Konsole ausgegeben
/// </summary>
void Bibliothek::print() const
{
    for(int i= 0; i <= anz-1; i++)
    {    
        medien[i]->print();
    }
}

