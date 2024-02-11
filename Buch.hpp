#pragma once
#include <stdio.h>
#include <string>
#include "Medium.hpp"

using namespace std;

/// <summary>
/// Buch Klasse. Die Stammklasse ist Medium
/// </summary>
class Buch : public Medium 
{
    string Autor;
  
public:
    Buch(string t, string a, string v, int jahr = 0): 
        Medium(t,v,jahr)
    {
        this->Autor = a;
        this->TypDesMediums = "Buch";
    } 
    
    void print() const;
};
