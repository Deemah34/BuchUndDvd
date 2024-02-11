#pragma once
#include <iostream>
#include <string>

using namespace std;

class Datum {
    int tag;
    int monat;
    int jahr;

public:
    Datum(int Tag_ = 0, int Monat_ = 0, int Jahr_ = 0) : tag(Tag_), monat(Monat_), jahr(Jahr_) {}

    // Konvertierkonstruktor für String
    Datum(const string &datum) {
        sscanf(datum.c_str(), "%d.%d.%d", &tag, &monat, &jahr);
    }

    // Konvertierkonstruktor für C-String
    Datum(const char *datum) {
        sscanf(datum, "%d.%d.%d", &tag, &monat, &jahr);
    }

    // Operator + addiert eine Anzahl von Tagen zum Datum hinzu
    Datum operator +(int tage) {
        Datum neuesDatum(*this);
        // Einfache Implementierung für die Addition von Tagen ohne Berücksichtigung von Monats- oder Jahreswechseln
        neuesDatum.tag += tage;
        return neuesDatum;
    }

    // Ausgabeoperator <<
    friend ostream & operator<<(ostream &out, const Datum &datum) {
        out << datum.tag << "." << datum.monat << "." << datum.jahr;
        return out;
    }
};
