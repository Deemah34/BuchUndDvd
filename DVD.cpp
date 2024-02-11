#include "DVD.hpp"
#include <iostream>

/// <summary>
/// DVD wird in der Konsole ausgegeben
/// </summary>
void DVD::print() const
{
    this->Medium::print();
    cout << "Dauer des Films: " << this->dauer << endl;
    cout << "---------------------------------------" << endl;
}
