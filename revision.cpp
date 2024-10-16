#include<iostream>

using namespace std;
void affiche(int *valeur){
    *valeur = 3;
    cout<<"*valeur= "<<*valeur;
}
int main(){
    int  a = 2;
    
    affiche(&a);
    cout<<endl<<"a="<<a;

    cout<<endl<<endl;
}