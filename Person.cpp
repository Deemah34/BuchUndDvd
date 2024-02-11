#include "Person.hpp"
#include <string>
#include <iostream>

using namespace std;

/// <summary>
/// Konstruktor von der Personenklasse.
/// </summary>
/// <param name="name">Name der Person.</param>
/// <param name="dauer">Mietdauer eines Elements.</param>
Person::Person(string name, int dauer)
{
    this->name = name;
    this->ausleihdauer = dauer;
}

/// <summary>
/// Name der Person wird zur�ckgegeben
/// </summary>
/// <returns>Name der Person</returns>
string Person::getName() const
{
    if(&name != nullptr)
        return this->name;
}

/// <summary>
/// Gibt die Ausleihdauer der jeweiligen Person zur�ck.
/// </summary>
/// <returns>Ausleihdauer</returns>
int Person::getAusleihdauer() const
{
    return this->ausleihdauer;
}

/// <summary>
/// Gibt den Namen der Person und die Ausleihdauer aus der Konsole aus.
/// </summary>
void Person::print() const
{
    cout << this->getName() << this->getAusleihdauer() << endl;
}
