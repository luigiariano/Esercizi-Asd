//
// Created by luigi on 12/10/2023.
//
#include <iostream>
#include <string>
using namespace std;
class Persona
{
public:
    Persona(string s){nome=s;}
    virtual void print(){cout<<"Ciao sono una persona e il mio nome è"<<nome<<endl;}

protected:
    string nome;
};
class Studente: public Persona
{
public:
   Studente(string s,int m): Persona(s){media=m;}
   void print(){cout<<"Ciao sono uno studente e il mio nome è"<<nome<<"La mia media è"<<media<<endl;}

private:
    float media;
};
class Professore: public Persona
{
public:
    Professore(string s,int pubb):Persona(s),Pubblicazioni{pubb}{}
    void print(){cout<<"Ciao sono uno professore e il mio nome è"<<nome<<"Le mie pubblicazioni sono"<<Pubblicazioni<<endl;}


protected:
    int Pubblicazioni;

};
int main(){
    /*
     In questo esempio viene mostrata la potenza del polimorfismo.
     Vengono create 3 classi,rispettivamente:
     -Persona: Classe Base che contiene il metodo virtual void print(virtual perchè dobbiamo ridefinirlo in altre classi e vogliamo che allo stesso metodo siano associati diversi significati
     -Studente: Classe che eredita da Persona e che ridefinisce il metodo print
     -Professore: Classe che eredita da Professore e che ridefinisce il metodo print
     Il polimorfismo si può utilizzare soltanto con:
     -Virtual
     -Strutture dati dinamiche
     */
    Persona *p; //creiamo un puntatore
    Studente x("Luigi",30);   //Un oggetto della classe studente
    p=&x; //p punta all'indirizzo di x e quindi puo utilizzarne i metodi
    p->print();
    Professore y("Mattia",25);
    p=&y;
    p->print();
    Professore o("Alessio",25);
    p=&o;
    p->print();


    return 0;
}