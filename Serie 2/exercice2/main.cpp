#include <iostream>
#include <string>
#include "Concert.h"

using namespace std;

int main(){
    Concert c("Concert A", "15/12/2024", 20, 90);
    Concert c2("Concert B", "15/12/2024", 19, 19);
    c.afficherDetails();
    c2.afficherDetails(true, false, true, false);
    Concert c3("Concert C", "", 18, 100);
    c3.afficherDetails(false, false, false);
    cout<<"Nombre total de concerts : "<<Concert::getTotalConcerts()<<endl;
    return 0;
}