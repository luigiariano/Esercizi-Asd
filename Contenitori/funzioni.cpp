    //
    // Created by luigi on 04/11/2023.
    //
    #include "Libreria.h"
//Iteratori mostra la differenza che si ottiene nell'utlizzo di un indice piuttosto che di un iteratore
    void iteratori(vector<string> s){
        s.push_back("Number 10");
        s.push_back("Number 20");
        s.push_back("Number 30");
        cout << "Loop by index:" << endl;
        for(int ii=0; ii < s.size(); ii++) {
            cout << s[ii] << endl;
        }
        //Questo tipo di approccio lo conosciamo già.
        //Ora passeremo ad un approccio molto piu comodo con gli iteratori
        //Creiamo un iteratore di nome i
        cout<<endl<<"Reverse Iterator"<<endl;
        vector<string>::const_iterator i;

        for(i=s.begin();i!=s.end();++i){
            //Stampo il valore corrente di i
            cout<<*i<<endl;
            //possiamo accedere ad un elemento di i anche con le parentesi quadre
        }

    }


        //Utilizzo di list
        void example_list(list <int> container){
            int val;
            for(int i=0;i<=10;i++){
                val=i;
                container.push_back(val);
            }
            //Creiamo l'iteratore
            list <int>::iterator  i;
            for(i=container.begin();i!=container.end();i++){
                cout<<"elemento della lista: "<<*i<<endl;
            }
        }
        //In map il primo parametro è la chiave e il secondo il valore
    void contenitore_associativo(map<string,int> a){
        a["Primo"]=1;
        a["Secondo"]=2;
        cout<<"Grandezza di a "<<a.size()<<endl;
        a["Terzo"]=3;
        a["Quarto"]=4;
        map<string,int>::iterator i;
        for(i=a.begin();i!=a.end();i++){
            //Stmpiamo la chiave e il valore corrente
            //A quanto pare non li stampa in maniera ordinata
            cout<<"Indice: "<<i->first<<" Elemento: "<<i->second<<endl;
        }
        //Con find andiamo a cercare un elemento in particolare In questo caso il seocondo elemento
        cout<<"Elemento di indice Secondo "<<a.find("Secondo")->second<<endl;
    }


    //Utilizzo di range-for
    void range_for(){
        int seq[]={0,1,2,3,4,5,6,7,8,9};
        //Possiamo visualizzare questa sequenza nel seguente modo
        //In questo modo non ci dobbiamo preoccupare dei limiti della sequenza

        for(auto x :seq){
            cout<<x<<'\n';
        }
    }
    //Utilizzo range-for per contenitori diversi da array
    void rangeforcontainer(){
     vector<int> a;
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);
        a.push_back(6);
        for(auto x:a){
            cout<<x<<endl;
        }
    }
    //Somma di tutti gli elementi di un vector
    void somma(vector<int> a){
        int somma=0;
        for(auto x :a){
            somma+=x;
        }
        cout<<endl<<endl<<somma<<endl;
    }
    //Modifica di elementi
    void modifica(vector <int> a){
        for(auto &x:a){
            x=x+1;
            cout<<x<<endl;
        }
    }


