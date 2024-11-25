#include<iostream>

using namespace std;
class PileChar{
    private:
        char *pile;
        int max;
        int sommet;
    public:
        PileChar();
        PileChar(int m);
        PileChar(PileChar const &p);
        ~PileChar();
        int getMax() const;
        int getSommet() const;
        void afficher() const;
        void empiler(char c);
        char depiler();
};
PileChar::PileChar(){
    max = 50;
    sommet = 0;
    pile = new char[max];
}
PileChar::PileChar(int m){
    max = m;
    sommet = 0;
    pile = new char[max];
}
PileChar::PileChar(PileChar const &p){
    max = p.max;
    sommet = p.sommet;
    pile = new char[max];
    for(int i = 0; i< sommet; i++){
        pile[i] = p.pile[i];
    }
}
PileChar::~PileChar(){
    delete [] pile;
}
int PileChar::getMax() const{
    return max;
}
int PileChar::getSommet() const{
    return sommet;
}
void PileChar::afficher() const{
    cout<<"[";
    for(int i = 0; i < sommet ; i++){
        cout<<pile[i];
        if(i != (sommet - 1))
            cout<<",";
    }
    cout<<"]"<<endl;
}
void PileChar::empiler(char c){
    if(sommet < max){
        pile[sommet] = c;
        sommet++;
    }else{
        cout<<"La pile est pleine."<<endl;
    }
}
char PileChar::depiler(){
    //pile=[] sommet = 0
    if(sommet != 0){
        char c = pile[sommet-1];
        sommet--;
        return c;
    }else{
        cout<<"la pile est vide."<<endl;
        return '\0';
    }
    

}
int main(){
    PileChar p(4);
    p.empiler('a');
    p.empiler('b');
    p.empiler('c');
    p.afficher();
    char c= p.depiler();
    cout<<"Le caractere depiler est: "<<c<<endl;
    p.afficher();
    return 0;
}