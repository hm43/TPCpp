#include<iostream>

using namespace std;

class PileChar{
    private:
        char *pile;
        int max;
        int sommet;
    public:
        PileChar(int max=50){
            sommet = 0;
            this->max = max;
            pile = new char[max];
        }
        PileChar(PileChar const &p2){
            sommet = p2.sommet;
            max = p2.max;
            pile = new char[max];
            for(int i = 0; i< sommet; i++){
                pile[i] = p2.pile[i];
            }
        }
        ~PileChar(){
            delete [] pile;
        }
        int getMax(){
            return max;
        }
        int getSommet(){
            return sommet;
        }
        void afficher(){
            cout<<"[";
            for(int i = 0; i< sommet; i++){
                cout<<pile[i];
                if( i != sommet -1 )
                    cout<<",";
            }
            cout<<"]"<<endl;
        }
        void empiler(char c){
            if( sommet != max){
                pile[sommet] = c;
                sommet++;
            }else{
                cout<<"La pile est pleine."<<endl;
            }
        }
        char depiler(){
            if(sommet != 0){
                char c = pile[--sommet];
                return c;
            }else{
                cout<<"La pile est vide."<<endl;
            }
            return '\0';
        }


};

int main(){
    PileChar p1(20);
    p1.empiler('a');
    p1.empiler('b');
    p1.empiler('c');
    p1.afficher();

    char c = p1.depiler();
    cout<<"Le caractere depiler est: "<<c<<endl;
    p1.afficher();



    return 0;
}