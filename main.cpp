#include <iostream>
#include "Medium.hpp"
#include "Buch.hpp"
#include "DVD.hpp" // Ich nehme an, dass die DVD-Klasse in DVD.hpp definiert ist
#include "Medienbibliothek.hpp"
#include "Person.hpp"
#include "Student.hpp"
#include "Dozent.hpp"
#include "Datum.hpp"
using namespace std;

int main() { // Korrigierte Deklaration von main()
    //Datum *d = new Datum("1.1.1995"); // Datum-Objekt wird erstellt, aber nicht verwendet
	//Datum *d = new Datum("21.12.1995");

    // Erstellung von Buch- und DVD-Objekten
    Buch b1("C++: das umfassende Handbuch", "Jürgen Wolf","Galileo Press", 2014 );    
    Buch b2("C++ - der Einstieg", "Arnold Willemer", "Wiley", 2014);
    Buch b3("Der C++-Programmierer", "Rainer Grimm", "O’Reilly",2014);
    Buch b4("C++ for Dummies", "Stephen R. Davies", "Wiley", 2012);
    Buch b5("C++ lernen und professionell anwenden","Ulla Kirch und Peter Prinz", "mitp", 2012);
    Buch b6("BeagleBone für Einsteiger", "Matt Richardson","O’Reilly", 2014);
    DVD d1("Die Rächer von C++", "DVD ex", 1984, 666);
    DVD d2("Ganz nah dabei - Raumgestaltung in Kitas für 0- bis 3-Jährige", "Cornelsen", 2013, 30);

    // Erstellung einer Bibliothek und Hinzufügen von Medien
    Bibliothek bib(100);
    bib.mediumBeschaffen(b1);
	//bib.mediumBeschaffen(&b1);
    bib.mediumBeschaffen(b2);
    bib.mediumBeschaffen(b3);
    bib.mediumBeschaffen(b4);
    bib.mediumBeschaffen(b5);
    bib.mediumBeschaffen(b6);
    bib.mediumBeschaffen(d1);
    bib.mediumBeschaffen(d2);
    bib.print(); // Ausgabe der Bibliothek

    // Erstellung von Personen und Ausleihe von Medien
  /*  Person *p1 = new Student("Hägar", 12345678);
    Person *p2 = new Student("Hilde", 87654321);
    Person *p3 = new Dozent("Prof A", 4711);
    Person* p4 = new Dozent("Manuel", 1995);
    //Person* p5 = new Student("Manuell", 2112);
    bib.mediumAusleihen(2, *p1, "25.04.2014");
    bib.mediumAusleihen(7, *p2, "26.04.2014");
    bib.mediumAusleihen(6, *p3, "21.04.2014");
    bib.mediumAusleihen(6, *p4, "21.04.2014");
    bib.print(); // Ausgabe der aktualisierten Bibliothek
*/
    return 0; // Rückgabewert für main()
}