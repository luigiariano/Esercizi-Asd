/*
 * Esempio copia file
 */
#include "Libreria.h"
    using namespace std;
    int main(){
        //Prova funzione iteratori
        vector<string> s;
        iteratori(s);
        //Prova funzione liste
        list<int> a;
        example_list(a);
        //Prova funzione per map
        map<string,int> acc;
        contenitore_associativo(acc);
        //Utilizzo di Range for
        range_for();
        rangeforcontainer();
        //Somma di tutti gli elementi di un vector
        vector<int> conti;
        conti.push_back(2);
        conti.push_back(3);
        conti.push_back(4);
        conti.push_back(5);
        somma(conti);

        //Modifica di elementi
        modifica(conti);










        /*
        vector<string> v;
        //Apriamo il file in in lettura
        ifstream in;
        in.open("fillvector.txt");

        string line;
        //Ad ogni passo consideriamo una riga
        while (getline(in,line)){
            //Aggiungiamo la riga corrente all'interno di v
            v.push_back(line);
        }
        for (int i = 0; i <v.size() ; i++) {
            //Al passo i viene stampata la riga corrente
            cout<<i<<": "<<v[i]<<endl;
        }
        in.close();
        return 0;
         */


        /*
         * Lettura parola per parola
         */
        /*
        ifstream in;
        in.open("due.txt");
        vector<string> s;
        string word;
        //leggo una parola alla volta
        while (in>>word){
            s.push_back(word);
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i]<<" ";
        }
         */
    }
