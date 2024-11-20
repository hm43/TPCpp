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

};
int main(){
    PileChar p1, p2(3);



    cout<<endl<<endl;
    return 0;
}