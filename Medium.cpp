#include <iostream>
#include "Medium.hpp"

/// <summary>
/// Titel eines Mediums
/// </summary>
/// <returns>Titel</returns>
string Medium::getTitel() const
{
    return this->titel;
}

/// <summary>
/// Typ des Mediums
/// </summary>
/// <returns>Typ des Mesiums</returns>
string Medium::getTyp() const
{
    return this->TypDesMediums;
}

/// <summary>
/// Gibt die Person zur�ck
/// </summary>
/// <returns>Personen-Klasse die das Element ausgeliehen hat</returns>
Person *Medium::getAusleiher() 
{
    return this->ausleiher;
}

/// <summary>
/// Konstruktor der Klasse Medium
/// </summary>
/// <param name="t">Tag</param>
/// <param name="v">Verlag</param>
/// <param name="j">Jahr</param>
/// <param name="typ">Typ</param>
Medium::Medium(string t, string v, int j, string typ):
    titel(t),verlag(v),jahr(j)
{
    this->TypDesMediums = typ;
}

/// <summary>
/// Funktion zum ausleihen eines Buches
/// </summary>
/// <param name="p">Person als Personenklasse</param>
/// <param name="von_">Start Datum</param>
/// <param name="bis_">End Datum</param>
void Medium::ausleihen(Person &p, Datum von_, Datum bis_)
{
    this->ausleiher = &p;
    this->von = von_;
    this->bis = bis_;
}

/// <summary>
/// Gibt alle Informationen des Mediums auf der Konsole aus
/// </summary>
void Medium::print() const
{
        cout << this->TypDesMediums << endl;
        cout << "Titel des Mediums: " << this->titel << endl;
        cout << "Verlag des Mediums: " << this->verlag << endl;
        cout << "Erscheinungsjahr des Mediums: " << this->jahr << endl;
        
        if (ausleiher != nullptr)
        {
            cout << "Ausgeliehen von: " << this->ausleiher->getName() << endl;
            cout << "Ausgeliehen vom: " << this->von << endl;
            cout << "Ausgeliehen bis: " << this->bis << endl;
        }
        else
        {
            cout << "Ausleiher: keine" << endl;
        }
}

