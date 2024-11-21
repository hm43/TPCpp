#include<iostream>

using namespace std;

class PileChar{
    char *pile;
    int max;
    int sommet;
    public:
        PileChar();
        PileChar(int);
        PileChar(PileChar&);
        ~PileChar();
        int  getMax(){
            return max;
        }
        int getSommet(){
            return sommet;
        }
        void afficher();
        void empiler(char);
        char depiler();

};
PileChar::PileChar(){
    max = 50;
    sommet = 0;
    pile = new char[max];
}
PileChar::PileChar(int taille){
    max = taille;
    sommet = 0;
    pile = new char[max];
}
PileChar::PileChar(PileChar &p){
    max = p.max;
    sommet = p.sommet;
    pile = new char[max];
    for(int i = 0; i < sommet; i++){
        pile[i] = p.pile[i];
    }
}

PileChar::~PileChar(){
    delete [] pile;
}
void PileChar::afficher(){
    cout<<"[";
    for(int i = 0; i<sommet; i++){
        cout<<pile[i];
        if(i != (sommet - 1)) 
            cout<<",";
    }
    cout<<"]"<<endl;
}
void PileChar::empiler(char c){
    if(sommet == max){
        cout<<"la pile est pleine."<<endl;
    }else{
        pile[sommet++] = c;
    }
}
char PileChar::depiler(){
    if(sommet == 0){
        cout<<"La pile est vide."<<endl;
    }else{
        return pile[--sommet];
    }
}
int main(){
    PileChar mapile(10);
    mapile.empiler('a');
    mapile.empiler('b');
    mapile.empiler('c');
    mapile.empiler('a');
    mapile.empiler('b');
    mapile.empiler('c');
    mapile.empiler('a');
    mapile.empiler('b');
    mapile.empiler('c');
    mapile.empiler('a');
    mapile.empiler('b');
    mapile.empiler('c');
    mapile.afficher();

    cout<<"Le caractere depiler: "<<mapile.depiler()<<endl;

    mapile.afficher();

    return 0;
}