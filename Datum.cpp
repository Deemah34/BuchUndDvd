
#include "Datum.hpp"
#include <sstream>
#include <iostream>
#include <cstdlib>

/// <summary>
/// Konstruktor mit String Aufruf.
/// </summary>
/// <param name="datum">"20.10.2019"</param>
Datum::Datum(const string &datum)
{
    if (datum.length() != 12 || datum[2] != '.' || datum[5] != '.')
    {
        cout << "Falsche Datumseingabe!" << endl;
            this->tag = 1;
            this->monat = 1;
            this->jahr = 1955;
    }
    else
    {
        this->tag = std::stoi(datum.substr(0, 2));
        this->monat = std::stoi(datum.substr(3, 2));
        this->jahr = std::stoi(datum.substr(6, 4));
    }
}

/// <summary>
/// 
/// </summary>
/// <param name="Tag_"></param>
/// <param name="Monat_"></param>
/// <param name="Jahr_"></param>
Datum::Datum(int Tag_, int Monat_, int Jahr_)
{
    this->tag = Tag_;
    this->monat = Monat_;
    this->jahr = Jahr_;
}

/// <summary>
/// 
/// </summary>
/// <param name="datum"></param>
Datum::Datum(const char *datum)
{
    string c = datum;

    Datum::Datum(c);  // geht nicht bei Dimi 
}

/// <summary>
/// 
/// </summary>
/// <param name="tage"></param>
/// <returns></returns>
Datum Datum::operator +(int tage)
{
    this->tag += tage;

    this->jahr += this->tag / 360;
    this->tag = this->tag % 365;
    this->monat += this->tag / 12;
    this->tag = this->tag % 12;

     return *this;
}

/// <summary>
/// 
/// </summary>
/// <param name="os"></param>
/// <param name="datum"></param>
/// <returns></returns>
ostream & operator <<(ostream & os, const Datum & datum)
{
    os  << datum.tag << "." << datum.monat << "." << datum.jahr;
    return os; 
}


