#include "Buch.hpp"
#include <iostream>

/// <summary>
/// Das Buch wird in der Konsole ausgegeben
/// </summary>
void Buch::print() const
{ 
    this->Medium::print();   
    cout << "Autor des Buch: " << this->Autor << endl;
    cout << "---------------------------------------" << endl;
}
