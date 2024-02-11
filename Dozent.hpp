#pragma once
#include <stdio.h>
#include <iostream>
#include <string>
#include "Person.hpp"

/// <summary>
/// Klasse für Dozenten. Die Stammklasse ist Person
/// </summary>
class Dozent : public Person
{
public:
	int prfNr;
	string name;

	Dozent(string name, int nr);
	string getName() const{ return name; }
	
	void print() const;
};
