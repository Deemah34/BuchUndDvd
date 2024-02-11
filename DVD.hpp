#pragma once
#include <iostream>
#include <string>
#include "Medium.hpp"

using namespace std;

class DVD : public Medium {
    int dauer; // Laufzeit der DVD in Minuten

public:
    DVD(string t = "", string v = "", int j = 0, int d = 0) : Medium(t, v, j), dauer(d) {
        this->TypDesMediums = "DVD";
    }

    // Eine Methode, um Informationen über die DVD auszugeben
    void print() const {
        cout << "DVD Titel: " << this->titel << endl;
        cout << "DVD Regisseur: " << this->verlag << endl;
        cout << "Erscheinungsjahr: " << this->jahr << endl;
        cout << "Laufzeit (in Minuten): " << this->dauer << endl;
    }
};

