#include <iostream>
#include <string>
#include "Concert.h"

using namespace std;

int main(){
    Concert c("Concert A", "15/12/2024", 20, 90);
    c.afficherDetails(true, false);
    return 0;
}