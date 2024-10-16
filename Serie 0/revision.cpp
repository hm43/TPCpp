#include<iostream>

using namespace std;
void fonction(int *a){
    *a = 3;
    cout<<endl<<"a dans la fonction: "<<*a<<endl;
}
int main(){
    int var=2;
    fonction(&var);
    cout<<endl<<"var dans main: "<<var<<endl;
    return 0;

}