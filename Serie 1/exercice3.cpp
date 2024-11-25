#include<iostream>

using namespace std;
class PileChar{
    private:
        int max;
        int sommet;
        char *pile;
    public:
        PileChar(int);
        PileChar(PileChar const &p);
        ~PileChar();
        int getMax() const;
        int getSommet() const;
        void afficher() const;
        void empiler(char c);
        char depiler();
};
PileChar::PileChar(int m=50): max(m), sommet(-1){
    pile = new char[max];
}
PileChar::PileChar(PileChar const &p): max(p.max), sommet(p.sommet){
    pile = new char[max];
    for(int i = 0; i <= sommet; i++){
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
    return sommet+1;
}
void PileChar::afficher() const{
    cout<<"[";
    for(int i= 0; i <= sommet;i++){
        cout<<pile[i];
        if( i != sommet)
            cout<<",";
    }
    cout<<"]"<<endl;
}
void PileChar::empiler(char c){
    if(sommet + 1 < max){
        pile[++sommet] = c;
    }else{
        cout<<"La pile est pleine."<<endl;
    }
}
char PileChar::depiler(){
    if(sommet == -1){
        cout<<"La pile est vide."<<endl;
    }else{
        char c = pile[sommet];
        sommet--;
        return c;
    }
    return '\0';
}
int main(){
    PileChar p(3);
    p.empiler('a');
    p.empiler('b');
    p.empiler('c');
    p.empiler('d');
    p.afficher();
    char c = p.depiler();
    cout<<"Le charactere depiler est: "<<c<<endl;
    PileChar p2(p);
    p2.afficher();

    return 0;
}