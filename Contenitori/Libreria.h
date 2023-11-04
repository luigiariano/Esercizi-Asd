//
// Created by luigi on 04/11/2023.
//

#ifndef PROVA_LIBRERIA_H
#define PROVA_LIBRERIA_H

#endif //PROVA_LIBRERIA_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;
//Iteratori  funzione di esempio
void iteratori(vector<string> ss);
//Uso di list
void example_list(list <int> a);
//Uso di map
void contenitore_associativo(map<string,int> a);
//Utilizzo di range-for
void range_for();
//Utilizzo range-for per contenitore
void rangeforcontainer();
//Somma di piu valori con Range For
void somma(vector<int> a);

//Se vogliamo modificare degli  elementi si utilizza un reference
void modifica(vector<int> a);