#include "Dozent.hpp"

/// <summary>
/// Dozent wird in der Konsole ausgegeben.
/// </summary>
void Dozent::print() const
{
    printf("Prüfernummer: %d \n", this->prfNr);
    printf("Name des Dozenten: %s \n", getName().c_str());
}

/// <summary>
/// Konstruktor
/// </summary>
/// <param name="name">Name des Dozenten</param>
/// <param name="nr">Dozentennummer</param>
Dozent::Dozent(string name, int nr):
    Person(name,30)
{
    this->prfNr = nr;
}

